//Deletion operation in specific position using position
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
void deleteSpecific(int loc)
{
	struct Node *help=head,*temp=head;
	if(head==NULL)
	{
		printf("\nThere is Nothing to Delete\n");
    }
    else if(head->next==NULL)
    {
        free(head);
    	head=NULL;
	}
	else
	{
		while(loc!=1)
		{
			help=temp;
			temp=temp->next;
			loc--;
		}
		help->next=temp->next;
		free(temp);
		temp=NULL;
	}
}
void display()
{
	struct Node *temp=head;
	printf("After Deletion the data in the linked list are\n");
	while(temp!=NULL)
	{
	    printf("\n%d\t",temp->data);
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
    deleteSpecific(4);
	display();
	return 0;
}
