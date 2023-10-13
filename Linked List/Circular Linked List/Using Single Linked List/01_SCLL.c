//Circular Linked List Node Creation 
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
int main()
{
	struct Node *head,*middle,*last,*temp;
	
	//Memory Allocation
	head=(struct Node*)malloc(sizeof(struct Node));
	middle=(struct Node*)malloc(sizeof(struct Node));
	last=(struct Node*)malloc(sizeof(struct Node));
	
	//Assign the Values
	head->data=10;
	middle->data=20;
	last->data=30;
	
	//Linking of Nodes
	head->next=middle;
	middle->next=last;
	last->next=head;
	
	//Printing the values
	temp=head;
	do{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	while(temp!=head);
	return 0;
}
