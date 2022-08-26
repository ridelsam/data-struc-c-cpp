#include <stdio.h>
#include <stdlib.h>
#include "stack_array_func.c"


int main()
{
    int choice, data;
    
    while(1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: 
                printf("Enter the element to be pushed: ");
                scanf("%d", &data);
                push(data);
                break;
            
            case 2:
                data = pop();
                printf("Deleted %d element: %d\n", top, data);
                break;
            
            case 3:
                printf("The topmost element of the stack is %d\n", peek());
                break;

            case 4:
                print();
                break;

            case 5:
                exit(1);

            default:
                printf("Wrong choice\n");

        }
    }


    return 0;
}