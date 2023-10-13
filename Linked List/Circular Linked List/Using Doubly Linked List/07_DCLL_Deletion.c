//Delete at Specific position of the Linked List
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
		newNode->next=head;
		newNode->prev=newNode;
	}
	printf("%d inserted Successfully\n",val);
}

void deleteSpecific(int pos)
{
	if(head==NULL)
	{
		printf("Deletion Not Possible.\n");
	}
	else if(head->next==head)
	{
		printf("%d deleted Successfully.\n",head->data);
		free(head);
		head=NULL;
	}
	else
	{
        struct Node *temp=head,*help=NULL;
        int i;
        for(i=0;i<pos-1;i++)
        {
        	help=temp;
        	temp=temp->next;
		}
		help->next=temp->next;
		temp->next->prev=help;
		free(temp);
	}
}

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
	deleteSpecific(3);
	displayData();
	return 0;
}
