#ifndef DOUBLELLFUNC_H
#define DOUBLELLFUNC_H

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

void print (struct node* head);
struct node* addToEmpty(struct node* head, int data);
struct node* addAtBeg(struct node* head, int data);
struct node* addAtEnd(struct node* head, int data);
struct node* addAfterPos(struct node* head, int data, int pos);
struct node* addBeforePos(struct node* head, int data, int pos);
struct node* createList(struct node* head);
struct node* delFirst(struct node* head);
struct node* delLast(struct node* head);
struct node* delInter(struct node* head, int pos);

#endif