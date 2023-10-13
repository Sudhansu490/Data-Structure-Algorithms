//Get nth Node in a Single Linked List
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
int get_nth_Node(int index)
{
	struct node *temp=head;
	int i=0;//counter
	while(temp!=NULL)
	{
		if(i==index)
		{
			printf("\nThe nth Node is %d\n",temp->data);
			return temp->data;
		}
		i++;
		temp=temp->next;
	}
	return -1;
}
int main()
{
	insertlast(10);
	insertlast(20);
	insertlast(30);
	insertlast(40);
	insertlast(50);
	get_nth_Node(3);
   	return 0;
}
