//Deletion at End Position of the Linked List
#include<stdio.h>
#include<stdlib.h>

//Node Creation
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;

//Insertion function
void insertEnd(int);
void insertEnd(int val)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	if(head==NULL)
	{
		head=newNode;
		head->next=newNode;
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
	}
	printf("%d inserted Successfully\n",val);
}

//Deletion Function
void deleteEnd()
{
	struct Node *temp=head,*help=head;
	while(temp->next!=head)
	{
		help=temp;
		temp=temp->next;
	}
	help->next=head;
	temp->next=NULL;
	printf("\n%d Deleted Successfully\n",temp->data);
	free(temp);
}

//Displaying Elements
displayData()
{
	struct Node *temp=head;
	printf("\nThe Values are\n");
	do{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	while(temp!=head);
}

//Main Function
int main()
{
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
	insertEnd(50);
	deleteEnd();
	displayData();
	return 0;
}
