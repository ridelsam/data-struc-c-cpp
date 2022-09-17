#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *last, *t;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first; // address is passed and now first is refferd as last

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t; // putting address of current node in the next of last node
        last = t;       // assigning current node as last node
    }
}

void Display(struct Node *p)
{

    if(p!=NULL)
    {
        printf("%d\n", p->data);
        Display(p->next);
    }
}

int main()
{
    int A[] = {4, 5, 8, 9, 7};
    create(A, 5);
    Display(first);

    return 0;
}