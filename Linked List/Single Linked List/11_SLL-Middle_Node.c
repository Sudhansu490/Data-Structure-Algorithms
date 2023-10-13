//Find the middle node of a linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertlast(int);
void insertlast(int val)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		struct node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	printf("%d inserted successfully\n",val);
}
void findmidNode()
{
	struct node *temp=head;
	if(head==NULL)
	{
		printf("Linked List is empty\n");
	}
	else
	{
		int length;
		length=getLen();
		int i;
		for(i=0;i<length/2;i++)
		{
			temp=temp->next;
		}
		printf("\nMiddle Node value is %d\n",temp->data);
	}
}
int getLen()
{
	struct node *temp=head;
	int i=0;
	while(temp!=NULL)
	{
		i++;
		temp=temp->next;
	}
	return i;
}
int main()
{
	insertlast(10);
	insertlast(20);
	insertlast(30);
	insertlast(40);
	insertlast(50);
	insertlast(60);
	findmidNode();
	return 0;
}
