#include <iostream>
#include "includes/bst_func.cpp"

int main()
{

    BST bst;

    // Insert
    bst.Insert(10);
    bst.Insert(5);
    bst.Insert(20);
    bst.Insert(8);
    bst.Insert(30);

    // Inorder traversal
    bst.Inorder(bst.getRoot());
    cout << endl;

    // Search
    Node *temp = bst.Search(2);
    if (temp != nullptr)
    {
        cout << temp->data << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}