#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node* right;
    struct node* left;
};

//Inorder Traversal

void InorderTraversal(struct node* root)
{
    if(root==NULL)
    return;

    InorderTraversal(root->left);
    printf("%d\t",root->item);
    InorderTraversal(root->right);
}

//Preodrder Traversal
void PreorderTraversal(struct node* root)
{
    if(root==NULL)
    return;

    printf("%d\t",root->item);
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}

//Postodrder Traversal
void PostorderTraversal(struct node* root)
{
    if(root==NULL)
    return;

    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    printf("%d\t",root->item);
}   

//Create node

struct node* createNode(int value)
{
    struct node* newNode=malloc(sizeof(struct node));
    newNode->item=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

//Insert left

struct node* insertLeft(struct node* root,int value)
{
    root->left=createNode(value);
    return root->left;
}

//Insert right

struct node* insertRight(struct node* root,int value)
{
    root->right=createNode(value);
    return root->right;
}

int main()
{
    struct node* root=createNode(1);
    insertLeft(root,12);
    insertRight(root,9);
    insertLeft(root->left,5);
    insertRight(root->right,6);
    printf("\nInorder:\t");
    InorderTraversal(root);
    
    printf("\nPreOrder:\t");
    PreorderTraversal(root);
    
    printf("\nPostOrder:\t");
    PostorderTraversal(root);
    return 0;
}

