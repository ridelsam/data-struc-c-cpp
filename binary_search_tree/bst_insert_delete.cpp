
#include <iostream>
#include "includes/bst_func.cpp"


int main() {
 
    BST bst;
 
    // Iterative insert
    bst.iInsert(10);
    bst.iInsert(5);
    bst.iInsert(20);
    bst.iInsert(8);
    bst.iInsert(30);
 
    // Inorder traversal
    bst.Inorder(bst.getRoot());
    cout << endl;
 
    // Iterative search
    Node* temp = bst.iSearch(2);
    if (temp != nullptr){
        cout << temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }
 
    // Recursive search
    temp = bst.rSearch(bst.getRoot(), 20);
    if (temp != nullptr){
        cout << temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }
 
    // Recursive insert
    bst.rInsert(bst.getRoot(), 50);
    bst.rInsert(bst.getRoot(), 70);
    bst.rInsert(bst.getRoot(), 1);
    bst.Inorder(bst.getRoot());
    cout << "\n" << endl;
 
    // Inorder predecessor and inorder successor
    BST bs;
    bs.iInsert(5);
    bs.iInsert(2);
    bs.iInsert(8);
    bs.iInsert(7);
    bs.iInsert(9);
    bs.iInsert(1);
 
    temp = bs.InPre(bs.getRoot());
    cout << "InPre: " << temp->data << endl;
 
    temp = bs.InSucc(bs.getRoot());
    cout << "InSucc: " << temp->data << endl;
 
    bs.Inorder(bs.getRoot());
    cout << endl;
 
    // Delete
    bs.Delete(bs.getRoot(), 7);
    bs.Inorder(bs.getRoot());
    
    return 0;
}