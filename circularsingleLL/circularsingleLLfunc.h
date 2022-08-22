#ifndef CIRCULARSINGLELLFUNC_H
#define CIRCULARSINGLELLFUNC_H

struct node 
{
    int data;
    struct node* next;
};

void print(struct node* tail);
struct node* addToEmpty(int data);
struct node* addAtBeg(struct node* tail, int data);
struct node* addAtEnd(struct node* tail, int data);
struct node* addAfterPos(struct node*tail, int data, int pos);
struct node* createList(struct node* tail);
struct node* delFirst(struct node* tail);
struct node* delLast(struct node* tail);
struct node* delInter(struct node* tail, int post);
void countElements(struct node* tail);
int searchElements(struct node* tail, int element);


#endif