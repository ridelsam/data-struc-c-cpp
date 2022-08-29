#include <stdio.h>
#include <stdlib.h>
#include "Stack_HanoiTowerfunc.c"


int main()
{
    int data;
    struct node* top = NULL;

    push(1, &top);
    push(234, &top);   
    push(3, &top); 
    push(87, &top); 
    push(3543, &top);
    push(87, &top);  

    printf("Original Stack\n");
    print(&top);

    reverse_stack(&top);

    printf("Reversed Stack\n");
    print(&top);


    return 0;
}