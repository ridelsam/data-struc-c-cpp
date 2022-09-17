#include <iostream>
#include <stdlib.h>
using namespace std;

#include "linked_list_func.cpp"

int main()
{
    int A[]={4,7,9,12,18};
    create(A,5);
    Display();
    cout<<"\nDeleted : "<<Delete(first,3)<<endl;
    Display();

    return 0;
}