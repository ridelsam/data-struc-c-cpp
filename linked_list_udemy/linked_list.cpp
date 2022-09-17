#include <iostream>
#include <stdlib.h>
using namespace std;

#include "linked_list_func.cpp"

int main()
{
    int A[] = {4, 5, 8, 9, 7};
    create(A, 5);
    struct Node *temp;
    temp = ILinear_Search(first, 80);
    if (temp)
        cout << "Key found  " << temp->data << endl;
    else
        cout << "Key not found" << endl;
    Display();
    return 0;
}