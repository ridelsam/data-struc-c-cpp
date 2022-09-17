#include <iostream>
#include <stdlib.h>
using namespace std;

#include "linked_list_func.cpp"

int main()
{
    int A[]={4,5,8,9,7};
    create(A,5);
    cout<< "Before insert: "<<endl;
    Display();
    insert(2,78);

    cout<< "\nAfter insert: "<<endl;
    Display();

    return 0;
}