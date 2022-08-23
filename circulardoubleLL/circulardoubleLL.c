
#include <stdio.h>
#include <stdlib.h>
#include "circulardoubleLLfunc.c"



int main(){

    
    struct node* tail = NULL;
    tail = addToEmpty(45);
    tail = addAtBeg(tail, 34);
    tail = addAtEnd(tail, 23);
    tail = addAfterPos(tail, 67, 2);

    printf("Original list: ");
    print(tail);
    
    tail = delInter(tail, 3);

    printf("\nList after deletion: ");
    print(tail);

    return 0;

}



