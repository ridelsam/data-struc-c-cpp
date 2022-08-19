
#include <stdio.h>
#include <stdlib.h>
#include "singleLLfunc.c"





int main(){

    //Creating single linked list
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
  
    add_at_end(head, 98);
    add_at_end(head, 3);
    add_at_end(head, 67);

    struct node *ptr = head;

    //print data 
    printf("Original Linked list:   ");
    while(ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->link;

    }

    head = reverse(head);
    ptr = head;

    //list after node deletion
    printf("\nlist after reversal:    ");
    while(ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->link;

    }
    

    return 0;

}



