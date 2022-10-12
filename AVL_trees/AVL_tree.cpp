#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<stack>
#include "includes/AVL_tree_func.cpp"
using namespace std;


int main() {
 
    AVL tree;
 
    int A[] = {10, 20, 30, 25, 28, 27, 5};
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        tree.root = tree.rInsert(tree.root, A[i]);
    }
 
    tree.Inorder();
    cout << endl;
 
    tree.Delete(tree.root, 28);
   
    tree.Inorder();
    cout << endl;
 
    return 0;
}