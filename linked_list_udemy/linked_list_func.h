#ifndef LINKED_LIST_FUNC_H
#define LINKED_LIST_FUNC_H

#include<iostream>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create1(int A[],int n);
void create2(int A[],int n);
void Display();
void Display(struct Node *p);
int Max(struct Node * p);
int RMax(struct Node * p);
struct Node *Linear_Search(struct Node *p,int key);
struct Node *RLinear_Search(struct Node *p,int key);
struct Node *ILinear_Search(struct Node *p,int key);
void insert(int pos ,int value);
void count();
int Rcount(struct Node *p);
void sum();
int Rsum(struct Node *p);
int Delete(struct Node *p,int index);
bool isSorted(struct Node *p);
void Remove_Duplicate(struct Node *p);
void reverse1(struct Node *p);
void reverse2(struct Node *p);
void reverse3(struct Node *q,struct Node *p);
void Concatenate(struct Node *p, struct Node *q);
void Merge(struct Node *p, struct Node *q);
bool isloop(struct Node *f);


#endif
