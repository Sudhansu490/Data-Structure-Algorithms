//Deletion at Specific Position
#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertBegin(int);
void insertBegin(int val)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->prev=NULL;
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		newNode->prev=NULL;
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
	printf("%d inserted Successfully\n",val);
}
void deleteSpecific(int);
void deleteSpecific(int loc)
{
	if(head==NULL)
	{
		printf("\nDeletion Not Possible\n");
	}
	else
	{
//		struct Node *temp=head;
//		int i;
//		for(i=0;i<loc;i++)
//		{
//			temp=temp->next;
//		}
//		temp->prev->next=temp->next;
//		temp->next->prev=temp->prev;
//		free(temp);
        struct Node *temp=head,*help=NULL;
        int i;
        for(i=0;i<loc;i++)
        {
        	help=temp;
        	temp=temp->next;
		}
		help->next=temp->next;
		temp->next->prev=help;
		free(temp);
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
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	insertBegin(50);
	deleteSpecific(3);
	display();
	return 0;
}
