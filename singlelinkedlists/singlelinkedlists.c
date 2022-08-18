
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};


void add_at_end(struct node *head, int data);
void add_at_beg(struct node **head, int data);
void add_at_pos(struct node *head, int data, int pos);
struct node* del_first(struct node *head);
void del_last(struct node *head);

int main(){

    //1st node
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

  
    add_at_end(head, 98);
    add_at_end(head, 3);
    add_at_end(head, 67);

    

    //insering node at a certain position
    int data = 50, pos = 3;

    add_at_pos(head, data, pos);
    struct node *ptr = head;



    //print data 
    printf("Original Linked list:   ");
    while(ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->link;

    }

    del_last(head);
    ptr=head;

    //list after node deletion
    printf("\nlist after deletion:    ");
    while(ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->link;

    }

    return 0;

}



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