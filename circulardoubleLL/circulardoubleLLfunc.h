#ifndef CIRCULARDOUBLELLFUNC_H
#define CIRCULARDOUBLELLFUNC_H

struct node 
{
    struct node* prev;
    int data;
    struct node* next;
};

void print(struct node* tail);
struct node* addToEmpty(int data);
struct node* addAtBeg(struct node* tail, int data);
struct node* addAtEnd(struct node* tail, int data);
struct node* addAfterPos(struct node* tail, int data, int pos);
struct node* delFirst(struct node* tail);
struct node* delLast(struct node* tail);
struct node* delInter(struct node* tail, int pos);




#endif