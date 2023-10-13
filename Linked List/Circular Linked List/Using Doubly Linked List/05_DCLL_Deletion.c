//Delete the first element of the Linked List
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

void deleteBegin()
{
	if(head==NULL)
	{
		printf("Deletion Not Possible.\n");
	}
	else if(head->next==head)
	{
		head=NULL;
		free(head);
	}
	else
	{
		struct Node *help=head,*temp=head;
		while(help->next!=head)
		{
			help=help->next;
		}
		printf("\n%d deleted from the Beginning.\n",temp->data);
		head=head->next;
		head->prev=help;
		help->next=head;
		free(temp);
	}
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
	deleteBegin();
	displayData();
	return 0;
}
