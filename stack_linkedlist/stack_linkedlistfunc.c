#include <stdio.h>
#include <stdlib.h>
#include "stack_linkedlistfunc.h"





void add_at_beg(struct node **head, int data){
     struct node *ptr = (struct node*)malloc(sizeof(struct node)); 
     ptr->data = data;   
     ptr->link = NULL;

     ptr->link = *head;
     *head = ptr;
      
}

void push(int data)
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

    newNode->link = top;
    top = newNode;
}

int pop()
{
    struct node* temp;
    temp = top;

    if(isEmpty())
    {
        printf("Stack Underflow.");
        exit(1);
    }

    int val = temp->data;
    top = top->link;
    free(temp);
    temp = NULL;

    return val; 

}

int isEmpty()
{
    if(top == NULL)
    {
        return 1;
    }else 
    {
        return 0;
    }
}

int peek()
{
    if(isEmpty())
    {
        printf("Stack Underflow.");
        exit(1);
    }
    return top->data;
}


void print()
{
    struct node* temp;
    temp = top;

    if(isEmpty())
    {
        printf("Stack Underflow.");
        exit(1);
    }

    printf("The stack elements are: ");
    while(temp)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}