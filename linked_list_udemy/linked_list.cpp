#include <iostream>
#include <stdlib.h>
using namespace std;

#include "linked_list_func.cpp"

int main()
{
    struct Node *p,*q;
    int A[]={4,7,19,12,15,18};
    create1(A,6);   
    p=first->next->next;
    q=first->next->next->next->next->next;
    q->next=p;
    if(isloop(first))
    {
        cout<<"there\'s  a loop";
    }
    else
        cout<<"Theres not  a loop";
   

    return 0;
}