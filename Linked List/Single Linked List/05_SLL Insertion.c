//inserted at specified position using location
#include<stdio.h>
#include<stdlib.h>
struct Node
{
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
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		struct Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
	printf("%d Node inserted successfully\n",val);
}
void insertspecific(int,int);
void insertspecific(int val,int loc)
{
	struct Node *newNode,*temp=head;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	newNode->next=NULL;
	//traversing
	while(loc!=1)
	{
		temp=temp->next;
		loc--;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	printf("\n%d Inserted at specified position\n",val);
}
void display()
{
	struct Node *temp=head;
	printf("\n The Values are \n");
	//traversing
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertspecific(999,2);
    display();
	return 0;
}
