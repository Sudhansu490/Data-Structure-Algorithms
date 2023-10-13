//Deletion at Beginning Position 
#include<stdio.h>
#include<stdlib.h>
struct Node{
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
	printf("%d inserted Successfully\n",val);
}
void deleteBegin()
{
	if(head==NULL)
	{
		printf("\nList is empty, Deletion Not Possible");
	}
	else
	{
		struct Node *temp=head;
		head=head->next;
		free(temp);
		printf("\nOne Node deleted Successfully\n");
	}
}
void display()
{
	struct Node *temp=head;
	while(temp!=NULL)
	{
		printf("\n%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
	insertEnd(50);
	deleteBegin();
    deleteBegin();
	display();
}
