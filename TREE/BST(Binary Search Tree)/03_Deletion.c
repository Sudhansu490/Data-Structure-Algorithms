//BST Deletion
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
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->key=val;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

//insert Function
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

//Deletion Function
struct Node *removeNode(struct Node *root,int val)
{
	//Check the Tree is Empty
	if(root==NULL)
	   return NULL;
	//Find the Node to be deleted
	if(root->key<val)
	   root->right=removeNode(root->right,val);
	else if(root->key>val)
	   root->left=removeNode(root->left,val);
	else
	{
		//No Child Case/Leaf Node Deletion
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			return NULL;
		}
		//Right Child Deletion case
		else if(root->left==NULL)
		{
			struct Node *temp=root->right;
			free(root);
			return temp;
		}
		//Left Child Deletion case
		else if(root->right==NULL)
		{
			struct Node *temp=root->left;
			free(root);
			return temp;
		}
		//Node with two child Case Deletion
		else
		{
			int rightmin=getRightMin(root->right);
			root->key=rightmin;
			root->right=removeNode(root->right,rightmin);
		}
	}
}

//Getting Minimum value in Right subtree
int getRightMin(struct Node *root)
{
	struct Node *temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp->key;
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
	root=insert(root,25);
	root=insert(root,75);
	root=insert(root,250);
	printf("After Insertion\n");
	inorder(root);
	removeNode(root,50);
	removeNode(root,25);
    removeNode(root,200);
	printf("\nAfter Deletion\n");
	inorder(root);
	return 0;
}
