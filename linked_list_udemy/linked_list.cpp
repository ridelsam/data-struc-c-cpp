#include <iostream>
#include <stdlib.h>
using namespace std;

#include "linked_list_func.cpp"

int main()
{
    int A[]={4,7,7,7,12,12,15,18};
    create(A,8);
    cout<<"before\n";
    Display();
    cout<<"\nAfter\n";
    Remove_Duplicate(first);
    Display();
    
    

    return 0;
}