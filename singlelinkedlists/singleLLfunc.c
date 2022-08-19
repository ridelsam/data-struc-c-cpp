#include <stdio.h>
#include <stdlib.h>
#include "singleLLfunc.h"




void add_at_end(struct node *head, int data){
    struct node *ptr = head;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    
    while(ptr->link != NULL){
        ptr = ptr->link;
    }

    ptr->link = temp;
    

}

void add_at_beg(struct node **head, int data){
     struct node *ptr = (struct node*)malloc(sizeof(struct node)); 
     ptr->data = data;   
     ptr->link = NULL;

     ptr->link = *head;
     *head = ptr;
      
}

void add_at_pos(struct node *head, int data, int pos){
    struct node *ptr = head;
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node)); 
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;
    while(pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }

    ptr2->link = ptr->link;
    ptr->link = ptr2;

}

struct node* del_first(struct node *head){

    if(head == NULL)
        printf("List is already empty!");
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }

    return head;

}

void del_last(struct node *head){
    if(head == NULL)
        printf("List is already empty!");
    else if(head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else 
    {
        struct node *temp = head;
        while(temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }


}

void del_pos(struct node **head, int pos){
    struct node *current = *head;
    struct node *previous = *head;
    if(*head == NULL)
        printf("List is already empty!");
    else if(pos == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else 
    {
        while(pos != 1)
        {
            previous = current;
            current = current->link;
            pos--;
        }

        previous->link = current->link;
        free(current);
        current = NULL;
    }
    

}

struct node* del_list(struct node *head){
    struct node *temp = head;

    while(temp != NULL)
    {
        temp = temp->link;
        free(head);
        head = temp;
    }

    return head;

}

struct node* reverse(struct node *head){
    struct node *prev = NULL;
    struct node *next = NULL;
    while(head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }

    head = prev;
    return head;

}