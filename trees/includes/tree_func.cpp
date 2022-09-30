#include <iostream>
#include "tree_func.h"


Queue::Queue(int size)
{
    this->size = size;
    front = -1;
    rear = -1;
    Q = new Node *[size];
}

Queue::~Queue()
{
    delete[] Q;
}

bool Queue::isEmpty()
{
    if (front == rear)
    {
        return true;
    }
    return false;
}

bool Queue::isFull()
{
    if (rear == size - 1)
    {
        return true;
    }
    return false;
}

void Queue::enqueue(Node *x)
{
    if (isFull())
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {
        rear++;
        Q[rear] = x;
    }
}

Node *Queue::dequeue()
{
    Node *x = nullptr;
    if (isEmpty())
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        front++;
        x = Q[front];
    }
    return x;
}

template<class T>
Stack<T>::Stack(T size) {
    this->size = size;
    top = -1;
    S = new int[size];
}

template<class T> 
Stack<T>::~Stack() {
    delete[] S;
}

template<class T>  
void Stack<T>::push(T x) {
    if (isFull()){
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        S[top] = x;
    }
}

template<class T> 
T Stack<T>::pop() {
    T x = 1;
    if (isEmpty()){
        cout << "Stack Underflow!" << endl;
    } else {
        x = S[top];
        top--;
    }
    return x;
}

template<class T>  
T Stack<T>::peek(int index) {
    T x = -1;
    if (top-index+1 < 0 || top-index+1 == size){
        cout << "Invalid position!" << endl;
    } else {
        x = S[top-index+1];
    }
    return x;
}

template<class T>  
T Stack<T>::isFull() {
    if (top == size-1){
        return 1;
    }
    return 0;
}

template<class T>  
T Stack<T>::isEmpty() {
    if (top == -1){
        return 1;
    }
    return 0;
}

template<class T>  
void Stack<T>::display() {
    for (int i=top; i>=0; i--){
        cout << S[i] << " | " << flush;
    }
    cout << endl;
}

template<class T>   
T Stack<T>::stackTop() {
    if (isEmpty()){
        return -1;
    }
    return S[top];
}

void Tree::CreateTree()
{
    Node *p;
    Node *t;
    int x;

    Queue q(25);
    root = new Node;
    cout << "Enter root value: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();

        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter Right child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::Preorder(Node *p)
{
    if (p)
    {
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}

void Tree::Levelorder(Node *p)
{
    Queue q(100);
    cout << root->data << ", " << flush;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        if (p->lchild)
        {
            cout << p->lchild->data << ", " << flush;
            q.enqueue(p->lchild);
        }
        if (p->rchild)
        {
            cout << p->rchild->data << ", " << flush;
            q.enqueue(p->rchild);
        }
    }
}

int Tree::Height(Node *p)
{
    int l = 0;
    int r = 0;
    if (p == nullptr)
    {
        return 0;
    }

    l = Height(p->lchild);
    r = Height(p->rchild);
    if (l > r)
    {
        return l + 1;
    }
    else
    {
        return r + 1;
    }
}

void Tree::iterativePreorder(Node *p) {
    Stack<Node*> stk;
    while (p != nullptr || ! stk.isEmpty()){
        if (p != nullptr){
            cout << p->data << ", " << flush;
            stk.push(p);
            p = p->lchild;
        } else {
            p = stk.stackTop();
            stk.pop();
            p = p->rchild;
        }
    }
    cout << endl;
}
 
void Tree::iterativeInorder(Node *p) {
    Stack<Node*> stk;
    while (p != nullptr || ! stk.isEmpty()){
        if (p != nullptr){
            stk.push(p);
            p = p->lchild;
        } else {
            p = stk.stackTop();
            stk.pop();
            cout << p->data << ", " << flush;
            p = p->rchild;
        }
    }
    cout << endl;
}
 
void Tree::iterativePostorder(Node *p) {
    Stack<long int> stk;
    long int temp;
    while (p != nullptr || ! stk.isEmpty()){
        if (p != nullptr){
            stk.push((long int)p);
            p = p->lchild;
        } else {
            temp = stk.stackTop();
            stk.pop();
            if (temp > 0){
                stk.push(-temp);
                p = ((Node*)temp)->rchild;
            } else {
                cout << ((Node*)(-1 * temp))->data << ", " << flush;
                p = nullptr;
            }
        }
    }
    cout << endl;
}
 
