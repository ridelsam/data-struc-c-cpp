#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *last, *t;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first; // addreess is passed and now first is refferd as last

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t; // putting address of current node in the next of last node
        last = t;       // assigning current node as last node
    }
}

void Display(struct Node *p) // display using recurssion
{
    if (p != NULL)
    {
        cout << p->data << endl;
    }
    Display(p->next);
}
void RDisplay(struct Node *p) // reverse display using recurssion
{
    if (p != NULL)
    {
        RDisplay(p->next);
        cout << p->data << endl;
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
    cout << "Count is " << c << endl;
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
    cout << "sum is " << s << endl;
}
int Rsum(struct Node *p) // recursive sum of data of nodes
{
    if (p)
        return p->data + Rsum(p->next);
    return 0;
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

int main()
{
    int A[] = {4, 5, 78, 8, 94, 7222};
    create(A, 6);
    cout << RMax(first);

    return 0;
}