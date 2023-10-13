//Create 3 nodes and assign values and address to each nodes and link them
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *head,*middle,*last,*temp;
	head=(struct node*)malloc(sizeof(struct node));
	middle=(struct node*)malloc(sizeof(struct node));
	last=(struct node*)malloc(sizeof(struct node));
	
	//Assign the values
	head->data=100;
	middle->data=200;
	last->data=300;
	
	//Linking of nodes
	head->next=middle;
	middle->next=last;
	last->next=NULL;
	
	//Printing the values
//	printf("%d\n",head->data);
//	printf("%d\n",middle->data);
//	printf("%d\n",last->data);
	
	//Other way of Printing
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	return 0;
}
