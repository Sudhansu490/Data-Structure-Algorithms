//Insertion at Beginning of the Linked List
#include<stdio.h>
#include<stdlib.h>

//Node Creation
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;

//Insertion Function
void insertBegin(int);
void insertBegin(int val)
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
		head=newNode;
	}
	printf("%d inserted Successfully\n",val);
}

//Displaying Elements
void displayData(){
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
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	insertBegin(50);
	displayData();
	return 0;
}
