#ifndef LINKED_LIST_FUNC_H
#define LINKED_LIST_FUNC_H

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

} *first = NULL;

void create(int A[],int n);
void Display();
void RDisplay(struct Node *p);
int Max(struct Node * p);
int RMax(struct Node * p);
struct Node *Linear_Search(struct Node *p,int key);
struct Node *RLinear_Search(struct Node *p,int key);
struct Node *ILinear_Search(struct Node *p,int key);


#endif