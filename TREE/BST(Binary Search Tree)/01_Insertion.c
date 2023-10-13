//BST Insertion
#include<stdio.h>
#include<stdlib.h>

//Node Creation
struct Node{
	int key;
	struct Node *left;
	struct Node *right;
};
struct Node *root=NULL;
struct Node *getNewNode(int val)
{
	struct Node *newNode=malloc(sizeof(struct Node));
	newNode->key=val;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

//Insert Function
struct Node *insert(struct Node *root,int val)
{
	if(root==NULL)
	   return getNewNode(val);
	if(root->key<val)
	   root->right=insert(root->right,val);
	else if(root->key>val)
	   root->left=insert(root->left,val);
	return root;
}

//Inorder Function(Displaying)
void inorder(struct Node *root)
{
	if(root==NULL)
	   return;
    inorder(root->left);
    printf("%d\t",root->key);
    inorder(root->right);
}

//Main Function
int main()
{
	root=insert(root,100);
	root=insert(root,50);
	root=insert(root,200);
	root=insert(root,300);
	root=insert(root,250);
	printf("Inorder Traversal: ");
	inorder(root);
}
