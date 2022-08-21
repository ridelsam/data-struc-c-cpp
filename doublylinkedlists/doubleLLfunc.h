#ifndef DOUBLELLFUNC_H
#define DOUBLELLFUNC_H

struct node {
    int data;
    struct node* prev;
    struct node* next;
};


struct node* addToEmpty(struct node* head, int data);
struct node* addAtBeg(struct node* head, int data);
struct node* addAtEnd(struct node* head, int data);
struct node* addAfterPos(struct node* head, int data, int pos);
struct node* addBeforePos(struct node* head, int data, int pos);
struct node* createList(struct node* head);


#endif