#include <iostream>
#include <stdlib.h>
using namespace std;

#include "linked_list_func.cpp"

int main()
{
    int A[]={4,7,19,12,15,18};
    create(A,6);
    cout<<"Before"<<endl;
    Display();
    reverse3(NULL,first);
    cout<<"\nAfter"<<endl;
    Display();    

    

    return 0;
}