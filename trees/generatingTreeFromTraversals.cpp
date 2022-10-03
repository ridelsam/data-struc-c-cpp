#include <iostream>
#include "includes/tree_func.cpp"
#include <queue>
#include <stack>

using namespace std;

int main() {
 
    Tree bt;
 
    int preorder[] = {4, 7, 9, 6, 3, 2, 5, 8, 1};
    int inorder[] = {7, 6, 9, 3, 4, 5, 8, 2, 1};
 
 
    Node* T = bt.generateFromTraversal(inorder, preorder, 0, sizeof(inorder)/sizeof(inorder[0])-1);
    bt.Preorder(T);
 
    return 0;
}