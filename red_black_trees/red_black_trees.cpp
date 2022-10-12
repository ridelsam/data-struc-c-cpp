
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<stack>
#include "includes/red_black_func.cpp"
using namespace std;


int main() {
  RedBlackTree bst;
  bst.insert(55);
  bst.insert(40);
  bst.insert(65);
  bst.insert(60);
  bst.insert(75);
  bst.insert(57);

  bst.printTree();
  cout << endl
     << "After deleting" << endl;
  bst.deleteNode(40);
  bst.printTree();
}