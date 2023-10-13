//Insert at Beginning of the Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertBegin(int);//prototype
void insertBegin(int val)
{	
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}
	else{
		newNode->next=head;
		head=newNode;
	}
	printf("%d inserted successfully\n",val);
}
void displayData(){
	struct Node *temp=head;
	printf("\nThe Values are\n");
    while(temp!=NULL)
    {
    	printf("%d\n",temp->data);
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
	displayData();
	return 0;
}
