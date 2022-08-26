#ifndef STACK_ARRAY_FUNC_H
#define STACK_ARRAY_FUNC_H

#define MAX 15

int stack_arr[MAX];
int top = -1;

void push(int data);
void print();
int pop();
int isFull();
int isEmpty();
int peek();


#endif