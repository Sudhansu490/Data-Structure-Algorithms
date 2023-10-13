//Deletion in the End Position 
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
void deleteEnd()
{	
	if(head==NULL)
	{
		printf("\nList is Empty,Deletion not Possible\n");
	}
	else
	{
		struct Node *help,*temp=head;
		while(temp->next!=NULL)
		{
			help=temp;
			temp=temp->next;
		}
		if(temp==head)
		{
			head=NULL;
		}
		else
		{
			help->next=NULL;
		}
		free(temp);
		printf("\nOne Node Deleted Successfully\n");
	}
}
void display()
{
	struct Node *temp=head;
	if(head==NULL)
	{
		printf("\nList is Empty,Nothing to Display\n");
	}
	else
	{
	    while(temp!=NULL)
	    {
		    printf("\n%d\t",temp->data);
		    temp=temp->next;
	    }	
	}
}
int main()
{
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
	insertEnd(50);
	deleteEnd();
	deleteEnd();
	display();
	return 0;
}
