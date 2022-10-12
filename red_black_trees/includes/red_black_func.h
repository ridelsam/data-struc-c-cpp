#include <iostream>
using namespace std;


#ifndef red_black_func_h
#define red_black_func_h

struct Node {
  int data;
  Node *parent;
  Node *left;
  Node *right;
  int color;
};

typedef Node *NodePtr;

class RedBlackTree {
private:
  NodePtr root;
  NodePtr TNULL;

  void initializeNULLNode(NodePtr node, NodePtr parent);

  // Preorder
  void preOrderHelper(NodePtr node);

  // Inorder
  void inOrderHelper(NodePtr node);

  // Post order
  void postOrderHelper(NodePtr node);
    NodePtr searchTreeHelper(NodePtr node, int key);

  // For balancing the tree after deletion
  void deleteFix(NodePtr x);

  void rbTransplant(NodePtr u, NodePtr v);

  void deleteNodeHelper(NodePtr node, int key);

  // For balancing the tree after insertion
  void insertFix(NodePtr k);

  void printHelper(NodePtr root, string indent, bool last);

   public:
  RedBlackTree();

  void preorder();

  void inorder();

  void postorder();

  NodePtr searchTree(int k);

  NodePtr minimum(NodePtr node);

  NodePtr maximum(NodePtr node);

  NodePtr successor(NodePtr x);

  NodePtr predecessor(NodePtr x);

  void leftRotate(NodePtr x);

  void rightRotate(NodePtr x);

  // Inserting a node
  void insert(int key);
  void deleteNode(int data);
  void printTree();
};

#endif