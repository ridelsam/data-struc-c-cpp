#include <iostream>

using namespace std;
 

class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};
 
class Queue{
private:
    int size;
    int front;
    int rear;
    Node** Q;  // [Node*]*: Pointer to [Pointer to Node]
public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(Node* x);
    Node* dequeue();
};

class Tree{
private:
    Node* root;
public:
    Tree() { root = nullptr; }
    ~Tree();
    void CreateTree();
    void Preorder(){ Preorder(root); }  // Passing Private Parameter in Constructor
    void Preorder(Node* p);
    void Postorder(){ Postorder(root); }  // Passing Private Parameter in Constructor
    void Postorder(Node* p);
    void Inorder(){ Inorder(root); }
    void Inorder(Node* p);
    void Levelorder(){ Levelorder(root); }  // Passing Private Parameter in Constructor
    void Levelorder(Node* p);
    int Height(){ return Height(root); }  // Passing Private Parameter in Constructor
    int Height(Node* p);
    Node* getRoot(){ return root; }
};