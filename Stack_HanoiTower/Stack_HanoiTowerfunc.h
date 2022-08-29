#ifndef STACK_HANOITOWERFUNC_H
#define STACK_HANOITOWERFUNC_H

struct node {
    int data;
    struct node *link;
}; 



void add_at_beg(struct node **head, int data);
void push(int data, struct node** top);
int pop(struct node** top);
int isEmpty(struct node* top);
int peek();
void print(struct node** top);
void reverse_stack(struct node** top);

#endif