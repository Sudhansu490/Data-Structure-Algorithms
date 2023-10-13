//Insert at Specific position of the Linked List
#include<stdio.h>
#include<stdlib.h>

//Node Creation
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
struct Node *head=NULL;

void insertEnd(int);
void insertEnd(int val)
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
	}
	printf("%d inserted Successfully\n",val);
}

void insertSpecific(int,int);
void insertSpecific(int val,int pos)
{
	int i;
	struct Node *newNode,*temp=head;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	for(i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	temp->next->prev=newNode;
	newNode->next=temp->next;
	newNode->prev=temp;
	temp->next=newNode;
	printf("\n%d inserted at %d position successfully.\n",val,pos);
}

//Display Function
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
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
	insertEnd(50);
	displayData();
	insertSpecific(999,3);
	displayData();
	return 0;
}
