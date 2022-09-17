#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

#include "linked_list_func.h"



void create(int A[],int n)
{
    int i;
    struct Node *last, *t;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;//addreess is passed and now first is refferd as last

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;//putting address of current node in the next of last node 
        last=t;//assigning current node as last node
    }
}

void Display()
{
    struct Node *p;
    p=first;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

void RDisplay(struct Node *p)// reverse display using recurssion
{
    if(p!=NULL)
    {
        RDisplay(p->next);
        cout<<p->data<<endl;
    }
    
}

int Max(struct Node * p)
{
    int max=INT32_MIN;
    while (p!=NULL)
    {
        if(max<p->data)
            max=p->data;
        p=p->next;
    }
    return max;
    
}

int RMax(struct Node * p)
{
    int x=0;
    if(p==0)
        return INT32_MIN;
    else
    {
        x=RMax(p->next);
        if(x>p->data)
            return x;
        else
            return p->data;
    }
    
    
}