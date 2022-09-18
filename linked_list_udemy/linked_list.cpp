#include <iostream>
#include <stdlib.h>
using namespace std;

#include "linked_list_func.cpp"

int main()
{
    int A[] = {4, 7, 17, 21, 25, 30};
    int B[] = {5, 15, 19, 23, 27, 34, 37};
    create1(A, 6);
    cout << "First: " << endl;
    Display(first);
    create2(B, 7);
    cout << "\nSecond: " << endl;
    Display(second);
    cout << "\nThird: " << endl;
    Merge(first, second);
    Display(third);

    return 0;
}