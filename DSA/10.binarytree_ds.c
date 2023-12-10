#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};

struct node* createNode(int value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}

void inOrder(struct node* root) {
  if (root == NULL) 
  {
    return;
  }
  inOrder(root->left);
  printf("%d, ", root->data);
  inOrder(root->right);
}

void preOrder(struct node* root) {
  if (root == NULL)
  {
    return;
  }
  printf("%d, ", root->data);
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(struct node* root) {
  if (root == NULL)
  {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  printf("%d, ", root->data);
}

int main() {
  struct node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);

  printf("Inorder traversal \n");
  inOrder(root);

  printf("\nPreorder traversal \n");
  preOrder(root);

  printf("\nPostorder traversal \n");
  postOrder(root);
}