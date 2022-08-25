#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX-1)
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
    if(top == -1)
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


int main()
{
    int data;
    push(23);
    push(345);
    push(567);
    push(98);

    push(100);

    print();

    data = pop();
    data = pop();

    print();


    return 0;
}