#ifndef STACK_LINKEDLISTFUNC_H
#define STACK_LINKEDLISTFUNC_H

struct node {
    int data;
    struct node *link;
} *top = NULL;



void add_at_beg(struct node **head, int data);
void push(int data);
int pop();
int isEmpty();
int peek();
void print();



#endif