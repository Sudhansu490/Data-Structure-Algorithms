//Insert at the Beginning of the Linked List
#include<stdio.h>
#include<stdlib.h>

//Node Creation
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
struct Node *head=NULL;

//Insert() Function
void insertBegin(int);
void insertBegin(int val)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->prev=newNode->next=newNode;
		head=newNode;
	}
	else
	{
		struct Node *temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
		head->prev=newNode;
		newNode->next=head;
		head=newNode;
	}
	printf("%d inserted Successfully\n",val);
}

//Display() Function
void displayData()
{
	struct Node *temp=head;
	printf("\nThe Values are :");
	do{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=head);
}

//Main Function
int main()
{
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	insertBegin(50);
	displayData();
	return 0;
}
