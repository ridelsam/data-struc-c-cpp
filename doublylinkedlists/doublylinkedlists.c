
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


    printf("Before Deletion: \n");
    print(head);


    head = delInter(head, 2);
    printf("After Deletion: \n");
    print(head);

  

    return 0;

}



