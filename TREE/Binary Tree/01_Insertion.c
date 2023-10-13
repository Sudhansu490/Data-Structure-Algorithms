//Binary Tree Insertion
#include<stdio.h>
#include<stdlib.h>

//Node Creation
struct  Node{
	struct Node *left;
	int data;
	struct Node *right;
};
struct Node *root=NULL;
int check =0;

//Insert Function
struct Node *insert(struct Node*,int);
struct Node *insert(struct Node *root,int val)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	if(root==NULL)
	{
		newNode->left=newNode->right=NULL;
		root=newNode;
		check++;
	}
	else
	{
		if(check%2!=0)
		   root->left=insert(root->left,val);
		else
		   root->right=insert(root->right,val);
	}
	return root;
}

//Inorder Function(Displaying)
void inorder(struct Node*);
void inorder(struct Node *root)
{
	if(root==NULL)
	   return;
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
}

//Main Function
int main()
{
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,30);
	root=insert(root,40);
	root=insert(root,50);
	root=insert(root,60);
	root=insert(root,70);
	inorder(root);
	return 0;	
}
