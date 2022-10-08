#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<stack>
#include "includes/AVL_tree_func.cpp"
using namespace std;


int main() {
 
    // LL Rotation
    AVL tll;
    tll.root = tll.rInsert(tll.root, 30);
    tll.root = tll.rInsert(tll.root, 20);
    tll.root = tll.rInsert(tll.root, 10);
 
    tll.Inorder();
    cout << endl;
 
    // RR Rotation
    AVL trr;
    trr.root = trr.rInsert(trr.root, 10);
    trr.root = trr.rInsert(trr.root, 20);
    trr.root = trr.rInsert(trr.root, 30);
 
    trr.Inorder();
    cout << endl;
 
    return 0;
}