
#include <stdio.h>
#include <stdlib.h>
#include "circularsingleLLfunc.c"



int main(){

    struct node* tail;
    int element;
    tail = addToEmpty(45);
    tail = addAtBeg(tail, 34);
    tail = addAtBeg(tail, 7);
    tail = addAtEnd(tail, 456);
    tail = addAtEnd(tail, 123);
    

    print(tail);
    countElements(tail);

    printf("Enter the element: ");
    scanf("%d", &element);

    int index = searchElements(tail, element);

    if(index == -1)
        printf("element not found!");
    else if(index == -2)
        printf("Linked List is empty!");
    else 
        printf("Element %d is at index %d", element, index);
    

    return 0;

}



