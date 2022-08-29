#include <stdio.h>
#include <stdlib.h>
#include "Stack_HanoiTowerfunc.h"


void add_at_beg(struct node **head, int data){
     struct node *ptr = (struct node*)malloc(sizeof(struct node)); 
     ptr->data = data;   
     ptr->link = NULL;

     ptr->link = *head;
     *head = ptr;
      
}

void push(int data, struct node** top)
{
    struct node* newNode;
    newNode = malloc(sizeof(newNode));

    //checking if memory cant be allocated for some reason
    if(newNode == NULL)
    {
        printf("Stack Overflow.");
        exit(1);
    }

    newNode->data = data;
    newNode->link = NULL;

    newNode->link = *top;
    *top = newNode;
}


int pop(struct node** top)
{
    struct node* temp;
    int val;
    temp = *top;

    val = temp->data;
    *top = (*top)->link;
    free(temp);
    temp = NULL;
   
    return val; 
}


int isEmpty(struct node* top)
{
    if(top == NULL)
    {
        return 1;
    }else 
    {
        return 0;
    }
}

/*
int peek()
{
    if(isEmpty())
    {
        printf("Stack Underflow.");
        exit(1);
    }
    return top->data;
}
*/


void print(struct node** top)
{
    struct node* temp;
    temp = *top;

    printf("The stack elements are: ");
    while(temp)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void reverse_stack(struct node** top)
{
    struct node *top1 = NULL;
    struct node *top2 = NULL;

    //Pushing ontp temp stack 1
    while(*top != NULL)
    {
        push(pop(top), &top1);
    }

    //Pushing ontp temp stack 2
    while(top1 != NULL)
    {
        push(pop(&top1), &top2);
    }

    //Pushing onto original stack
    while(top2 != NULL)
    {
        push(pop(&top2), top);
    }

}