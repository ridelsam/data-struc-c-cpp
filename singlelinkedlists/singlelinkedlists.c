
#include <stdio.h>
#include <stdlib.h>
#include "singleLLfunc.c"





int main(){

    //Creating single linked list
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
  
    add_at_end(head, 50);
    add_at_end(head, 88);
    add_at_end(head, 90);

    struct node *ptr = head;

    //print data 
    printf("Original Linked list:   ");
    while(ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->link;

    }

    head = insert(head, 100);
    ptr = head;

    //list after insertion
    printf("\nlist after insertion:    ");
    while(ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->link;

    }
    

    return 0;

}



