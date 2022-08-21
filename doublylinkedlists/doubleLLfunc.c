#include <stdio.h>
#include <stdlib.h>
#include "doubleLLfunc.h"

void print (struct node* head)
{
    struct node* ptr = head;
     while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

}

struct node* addToEmpty(struct node* head, int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node* addAtBeg(struct node* head, int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;

}

struct node* addAtEnd(struct node* head, int data)
{
    struct node* temp, *tp;
    temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    tp = head;

    while(tp->next != NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev = tp;
    return head;

}


struct node* addAfterPos(struct node* head, int data, int pos)
{
    struct node* newP = NULL;
    struct node* temp = head;
    struct node* temp2 = NULL;
    newP = addToEmpty(newP, data);

    while(pos != 1)
    {
        temp = temp->next;
        pos--;
    }

    if (temp->next == NULL)
    {
        temp->next = newP;
        newP->prev = temp;
    }
    else
    {
        temp2 = temp->next;
        temp->next = newP;
        temp2->prev = newP;
        newP->next = temp2;
        newP->prev = temp;
        
    }
 
    return head;
   
}

struct node* addBeforePos(struct node* head, int data, int pos)
{
    struct node* newP = NULL;
    struct node* temp = head;
    struct node* temp2 = NULL;
    newP = addToEmpty(newP, data);
    int position = pos;

    while(position > 2)
    {
        temp = temp->next;
        pos--;
    }

    if(pos == 1)
    {
        head = addAtBeg(head, data);
    }
    else 
    {
        temp2 = temp->next;
        temp->next = newP;
        temp2->prev = newP;
        newP->next=temp2;
        newP->prev = temp;
        
    }
    
    return head;
    
}

struct node* createList(struct node* head)
{
    int n, data, i;
    printf("Enter the # of node(s): ");
    scanf("%d ", &n);

    if(n == 0)
    {
        return head;
    }
        
    printf("Enter the element for the node 1: ");
    scanf("%d ", &data);
    head = addToEmpty(head, data);

    for ( i=1; i<n; i++)
    {
        printf("Enter the element for the node %d: ", i+1);
        scanf("%d ", &data);
        head = addAtEnd(head, data);
    }

    return head; 
}

struct node* delFirst(struct node* head)
{

    head = head->next;
    free(head->prev);
    head->prev = NULL;
    return head;
}

struct node* delLast(struct node* head)
{
    struct node* temp = head;
    struct node* temp2;
    while(temp->next != NULL)
        temp = temp->next;
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    return head;
}

struct node* delInter(struct node* head, int pos)
{
    struct node* temp = head;
    struct node* temp2 = NULL;
    if (pos == 1)
    {
        head = delFirst(head);
        return head;
    }

    while(pos > 1)
    {
        temp = temp->next;
        pos--;
    }

    if(temp->next == NULL)
    {
        head = delLast(head);
    }
    else 
    {
        temp2 = temp->prev;
        temp2->next = temp->next;
        temp->next->prev = temp2;
        free(temp);
        temp = NULL;
    }

    return head;

}

struct node* reverse(struct node* head)
{
    struct node* ptr1 = head;
    struct node* ptr2 = ptr1->next;

    ptr1->next = NULL;
    ptr1->prev = ptr2;

    while(ptr2 != NULL)
    {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }

    head = ptr1;
    return head;
}