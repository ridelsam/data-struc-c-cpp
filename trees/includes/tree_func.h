#include <iostream>

using namespace std;

#ifndef tree_func_h
#define tree_func_h
 

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

template<class T>
class Stack{
private:
    T size;
    T top;
    int* S;
public:
    Stack() { top = NULL; }
    Stack(T size);
    ~Stack();
    void push(T x);
    T pop();
    T peek(int index);
    T isFull();
    T isEmpty();
    void display();
    T stackTop();
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
    void iterativePreorder(Node* p);
    void iterativePreorder() { iterativePreorder(root); }
    void iterativeInorder(Node* p);
    void iterativeInorder() { iterativeInorder(root); }
    void iterativePostorder(Node* p);
    void iterativePostorder() { iterativePostorder(root); }
};


#endif