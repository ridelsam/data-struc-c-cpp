#include <iostream>
#include <stdlib.h>
using namespace std;

#include "linked_list_func.cpp"

int main()
{
    int A[] = {4, 7, 9, 12, 18};
    create(A, 5);
    cout << "Sorted : " << isSorted(first) << endl;

    return 0;
}