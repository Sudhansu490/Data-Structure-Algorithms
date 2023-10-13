//Search a Node in BST
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
	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
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

//Search Function
int search(struct Node *root,int val)
{
	if(root==NULL)
	   return 0;
	if(root->key==val)
	   return 1;
	if(root->key<val)
	   return search(root->right,val);
	else
	   return search(root->left,val);
}

//Main Function
int main()
{
	root=insert(root,100);
	root=insert(root,50);
	root=insert(root,25);
	root=insert(root,200);
	root=insert(root,150);
	root=insert(root,75);
	int data=search(root,150);
	if(data==1)
	   printf("Search Success");
	else
	   printf("Search Failure");
	return 0;
}
