
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

/*
void count_of_nodes(struct node *head);
*/

void add_at_end(struct node *head, int data);
void add_at_beg(struct node **head, int data);
void add_at_pos(struct node *head, int data, int pos);

int main(){

    //1st node
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

  
    add_at_end(head, 98);
    add_at_end(head, 3);
    add_at_end(head, 67);

    
    
    /*
    //adding data at the beginning of the list
    int data = 99;

    add_at_beg(&head, data);
    ptr = head;
    */

    //insering node at a certain position
    int data = 50, pos = 3;

    add_at_pos(head, data, pos);
    struct node *ptr = head;


    //print data 
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;

    }

    /*
    //traversing the single linked list
    count_of_nodes(head);
    */



    return 0;

}

/*
void count_of_nodes(struct node *head){

    int count = 0;
    if (head == NULL)
        printf("Linked List is empty");
    
    struct node *ptr = NULL;
    ptr = head;

    while(ptr != NULL){
        count ++;
        ptr = ptr->link;
    }

    printf("%d", count);

}
*/



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