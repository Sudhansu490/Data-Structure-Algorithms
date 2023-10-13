//Insertion at Specific Position of the Linked List
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

//Insert Specific Function
void insertSpecific(int,int);
void insertSpecific(int val,int loc)
{
	struct Node *newNode,*temp=head;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	int i;
	for(i=0;i<loc-1;i++)
	{
		temp=temp->next;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	printf("\n%d inserted at %d position of the Linked List\n",val,loc);
}

//Displaying Elements
displayData()
{
	struct Node *temp=head;
	printf("\nThe Values are :\n");
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
	displayData();
	insertSpecific(999,2);
	displayData();
	return 0;
}
