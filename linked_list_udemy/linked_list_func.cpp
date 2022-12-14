#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

#include "linked_list_func.h"

void create1(int A[],int n)
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
void create2(int A[],int n)
{
    int i;
    struct Node *last, *t;
    second=new Node;
    second->data=A[0];
    second->next=NULL;
    last=second;//addreess is passed and now first is refferd as last

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;//putting address of current node in the next of last node 
        last=t;//assigning current node as last node
    }
}

void Display(struct Node *p)
{

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int Max(struct Node *p)
{
    int max = INT32_MIN;
    while (p != NULL)
    {
        if (max < p->data)
            max = p->data;
        p = p->next;
    }
    return max;
}

int RMax(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return INT32_MIN;
    else
    {
        x = RMax(p->next);
        if (x > p->data)
            return x;
        else
            return p->data;
    }
}

void count() // counting of nodes
{
    int c = 0;
    struct Node *p;
    p = first;
    while (p)
    {
        c++;
        p = p->next;
    }
    cout << " Count is " << c << endl;
}

int Rcount(struct Node *p) // recursive counting of nodes
{
    if (p)
        return Rcount(p->next) + 1;
    return 0;
}

void sum() // sum of data of nodes
{
    int s = 0;
    struct Node *p;
    p = first;
    while (p)
    {
        s = s + p->data;
        p = p->next;
    }
    cout << " sum is " << s << endl;
}

int Rsum(struct Node *p) // recursive sum of data of nodes
{
    if (p)
        return p->data + Rsum(p->next);
    return 0;
}

struct Node *Linear_Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
            return p;
        p = p->next;
    }
    return NULL;
}

struct Node *RLinear_Search(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    else if (p->data == key)
        return p;
    else
        return RLinear_Search(p->next, key);
}

struct Node *ILinear_Search(struct Node *p, int key)
{
    struct Node *q;
    while (p != NULL)
    {
        if (p->data == key)
        {
            if (p == first) //  very  important as in case if the first element is same to key there
                            // wont be any value to q
                return p;
            else
            {
                q->next = p->next;
                p->next = first;
                first = p;
            }
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

void insert(int pos, int value)
{
    if (pos < 0 || pos > Rcount(first))
        return;

    struct Node *p;
    struct Node *t;
    p = first;
    t = new Node;
    if (pos == 0)
    {
        t->data = value;
        t->next = first;
        first = t;
    }
    else if (pos > 0)
    {
        for (int i = 0; i < pos - 1 && p; i++) // as it go to next node after one loop  and the node starts from 0
        {
            p = p->next;
        }
        t->data = value;
        t->next = p->next;
        p->next = t;
    }
}

void S_Insert(struct Node *p, int value)
{
    struct Node *q;
    struct Node *t;
    t = new Node;
    t->data = value;
    t->next = NULL;

    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < value)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            q->next = t;
            t->next = p;
        }
    }
}

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1; // to store data of deleted node
    if (index < 0 || index > Rcount(p))
        return -1;
    if (index == 1)
    {
        x = first->data;
        first = first->next;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        x = p->data;
        q->next = p->next;
    }

    delete p;
    return x;
}

bool isSorted(struct Node *p)
{
    int n = INT32_MIN;
    while (p != NULL)
    {
        if (p->data < n)
            return false;
        n = p->data;
        p = p->next;
    }
    return true;
}

void Remove_Duplicate(struct Node *p)
{
    struct Node *q;
    q = new Node;
    q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void reverse1(struct Node *p) // Reverse using (Auxiliary)array
{
    int *A, i = 0;
    struct Node *q;
    A = new int[Rcount(p)];
    q = p;
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

void reverse2(struct Node *p) // reversing by reversing the links
{
    struct Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q; // make first the q as links are reveresed at q is at the last node after loop
}

void reverse3(struct Node *q, struct Node *p)
{
    if (p != NULL)
    {
        reverse3(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

void Concatenate(struct Node *p, struct Node *q)
{
    third = p;
    while (p->next)
        p = p->next;
    p->next = q;
}

void Merge(struct Node *p, struct Node *q)
{
    struct Node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
        last->next = p;
    else
        last->next = q;
}

bool isloop(struct Node *f)
{
    struct Node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        q=q->next!=NULL?q->next:NULL;
    } while (p && q && p!=q);
    
    return p==q?true:false;
}
