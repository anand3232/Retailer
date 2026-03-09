//Create a binary tree header file

#ifndef BINARY_H
#define BINARY_H

struct Node
{
   Node *lnext;
   int data;
   Node *rnext;
};

class BST
{
   private:
	Node *root;
   public:
	void insert(int data)
	void inorder();

};
