#include <stdio.h>
#include <stdlib.h>
#include "stack_array_func.h"


void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top+1;
    stack_arr[top] = data;
}

int pop()
{
    int value;
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}



void print()
{
    int i;
    if(top == -1)
    {
        printf("Stack underflow\n");
        return;
    }
    for(i=top; i>=0; i--)
        printf("%d ", stack_arr[i]);
    printf("\n");
}


int isFull()
{
    if(top == MAX - 1)
    {
        return 1;
    }
      
    else 
    {
        return 0;
    }
        
}

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int peek()
{
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }

    return stack_arr[top];
}