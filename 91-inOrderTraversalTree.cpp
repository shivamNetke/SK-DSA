//    in order traversal TREE

#include <stdio.h>
#include<iostream>

#include <stdlib.h>
using namespace std;

// struct alignment and padding
struct Node
{
  struct Node *left;
  int data;
  struct Node *right;
};

// 01 Create Node
struct Node *CreateNode(int data)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  if (NULL == newNode)
  {
    printf("mem alloc failed");
    return NULL;
  }

  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

// 02 Tree Traversal
// 01 BFS (Breadth First Traversal) (Level Order Traversal)
// 02 DFS (Depth First Traversal)
// 02 01 Inorder Traversal (Left Root Right)
// 02 02 Preorder Traversal (Root Left Right)
// 03 03 Postorder Traversal (Left Right Root)

void InorderTraversal(struct Node *root)
{
  if (root != NULL)
  {
    InorderTraversal(root->left);
    printf("%d \n", root->data);
    InorderTraversal(root->right);
  }
}

void PreorderTraversal(struct Node *root)
{
  if (root != NULL)
  {
    printf("%d \n", root->data);
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
  }
}

void PostorderTraversal(struct Node *root)
{
  if (root != NULL)
  {
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    printf("%d \n", root->data);
  }
}

int main()
{

  struct Node *root = CreateNode(10);

  // ------ left sub tree
  root->left = CreateNode(20);
  root->left->left = CreateNode(40);
  root->left->left->right = CreateNode(80);
  root->left->right = CreateNode(50);
  root->left->right->left = CreateNode(90);

  // right sub tree
  root->right = CreateNode(30);
  root->right->left = CreateNode(60);
  root->right->left->left = CreateNode(100);
  root->right->right = CreateNode(70);
  root->right->right->left = CreateNode(110);
  root->right->right->right = CreateNode(120);

  InorderTraversal(root);

  printf("\n------------------\n");

  PreorderTraversal(root);

  printf("\n------------------\n");

  PostorderTraversal(root);
  return 0;
}
/*
    
*/