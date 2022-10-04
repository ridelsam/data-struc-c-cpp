#include <iostream>

using namespace std;

#ifndef bst_func_h
#define bst_func_h


class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};
 
class BST{
private:
    Node* root;
public:
    BST(){ root = nullptr; }
    Node* getRoot(){ return root; }
    void Insert(int key);
    void Inorder(Node* p);
    Node* Search(int key);
};

#endif