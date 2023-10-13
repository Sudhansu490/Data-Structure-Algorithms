//Insert a Node at Specific Position
#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertBegin(int);
void insertBegin(int val)
{
	//Create a Node
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	
	//Assign value
	newNode->data=val;
	
	//Check Linked List is empty or not
	if(head==NULL)
	{
		newNode->prev=NULL;
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		newNode->prev=NULL;
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
	printf("%d insert successfully at the Beginning Position\n",val);
}
void insertSpecific(int,int);
void insertSpecific(int val,int pos)
{
	int i;
	struct Node *newNode,*temp=head;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	//Traverse until Position
	for(i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	temp->next->prev=newNode;
	newNode->next=temp->next;
	newNode->prev=temp;
	temp->next=newNode;
	printf("\n%d inserted at %d position successfully\n",val,pos);
}
void display()
{
	struct Node *temp=head;
	printf("\nForward Direction\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insertBegin(10);
	insertBegin(20);
	insertBegin(40);
	insertBegin(50);
	insertSpecific(30,2);
	display();
}
