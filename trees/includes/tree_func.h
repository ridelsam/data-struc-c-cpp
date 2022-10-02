#include <queue>
#include <stack>
#include <iostream>

using namespace std;

#ifndef tree_func_h
#define tree_func_h
 

class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
    Node() {};
    Node(int data);
};
 
Node::Node(int data) {
    lchild = nullptr;
    this->data = data;
    rchild = nullptr;
}

class Tree{
private:
    Node* root;
public:
    Tree();
    ~Tree();
    void CreateTree();
    void Preorder(Node* p);
    void Preorder() { Preorder(root); }  // Passing Private Parameter in Constructor
    void Inorder(Node* p);
    void Inorder() { Inorder(root); }
    void Postorder(Node* p);
    void Postorder() { Postorder(root); }
    void Levelorder(Node* p);
    void Levelorder() { Levelorder(root); }
    int Height(Node* p);
    int Height() { return Height(root); }
    void iterativePreorder(Node* p);
    void iterativePreorder() { iterativePreorder(root); }
    void iterativeInorder(Node* p);
    void iterativeInorder() { iterativeInorder(root); }
    void iterativePostorder(Node* p);
    void iterativePostorder() { iterativePostorder(root); }
    int searchInorder(int inArray[], int inStart, int inEnd, int data);
    Node* generateFromTraversal(int inorder[], int preorder[], int inStart, int inEnd);
};


#endif