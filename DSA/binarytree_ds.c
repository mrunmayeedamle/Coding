#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
int i;

struct node *newNode(int n){
    struct node *createNode = malloc(sizeof(struct node));
    createNode->data = n;
    createNode->left = NULL;
    createNode->right = NULL;

    return createNode;
};
struct node* root;

void CreateNode(struct node**);
void insert_left(struct node*);
void insert_right(struct node*);
void inOrder(struct node*);
void preOrder(struct node*);
void postOrder(struct node*);
//void display();

int main()
{
    int x;
    while(1)
    {
        printf("Binary Tree Operations \n \n");
        printf("Enter the operation you want to perform: \n");
        printf("1) Enter Root Node \n2) Insert to the left of node \n3) Insert to right of node \n");
        printf("4) Insert in left subtree \n5) Insert in Right Subtree \n");
        printf("6) Pre-order traversal \n7) In-order traversal \n8) Post-order traversal \n9) Display Tree \n10) Exit \n");
        scanf("%d", &x);
        switch(x)
        {
            case 1: CreateNode(&root);
            break;
            case 2: insert_left(root);
            break;
            case 3: insert_right(root);
            break;
            case 4: {
                printf("Do you want to insert left(1) or right(2)?: \n");
                scanf("%d", &i);
                if(i == 1)
                {
                    insert_left(root->left);
                }
                if(i == 2)

                {
                    insert_right(root->left);
                }
                    }
            case 5: {
                printf("Do you want to insert left(1) or right(2)?: \n");
                scanf("%d", &i);
                if(i == 1)
                {
                    insert_left(root->right);
                }
                if(i == 2)

                {
                    insert_right(root->right);
                }
                    }
            break;
            case 6: preOrder(root);
            break;
            case 7: inOrder(root);
            break;
            case 8: postOrder(root);
            break;
            case 9: //display();
            break;
            case 10: exit(1);
            break;
            default: printf("Error! Wrong Choice. \n");
        }
        sleep(1);
    }

    return 0;
}

void CreateNode(struct node** root)
{
    int value;
    printf("Enter the value for root node: \n");
    scanf("%d", &value);
    root = newNode(value);
    printf("Root inserted.\n\n");
}

void insert_left(struct node* root)
{
    int value;
    printf("Enter the value to be inserted to the left: \n");
    scanf("%d", &value);

    root->left = newNode(value);
}

void insert_right(struct node* root)
{
    int value;
    printf("Enter the value to be inserted to the right: \n");
    scanf("%d", &value);

    root->right = newNode(value);
}

void preOrder(struct node *root)
{
    if(root == NULL)
    {
        printf("Empty tree. \n\n");
        return;
    }
    printf("%d ,", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct node *root)
{
    if(root == NULL)
    {
        printf("Empty tree. \n\n");
        return;
    }
    inOrder(root->left);
    printf("%d ,", root->data);
    inOrder(root->right);
}

void postOrder(struct node *root)
{
    if(root == NULL)
    {
        printf("Empty tree. \n\n");
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ,", root->data);
}