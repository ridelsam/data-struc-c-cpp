
#include <stdio.h>
#include <stdlib.h>
#include "doubleLLfunc.c"





int main(){

    //Creating double linked list
    struct node *head = NULL;
    struct node* ptr;
    head = addToEmpty(head, 34);
    head = addAtEnd(head, 45);
    head = addAtEnd(head, 9);
    head = addAtEnd(head, 500);


    printf("Original List: \n");
    print(head);


    head = reverse(head);
    printf("Reversed List: \n");
    print(head);

  

    return 0;

}



