//All Operations of Ordinary Queue
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int Queue[SIZE],front=-1,rear=-1;

//Function Prototypes
void enQueue(int);
void deQueue();
void display();

//Insert Operation
void enQueue(int val)
{
	if(rear==SIZE-1)
	{
		printf("Queue is full...Insertion Not Possible.\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		Queue[rear]=val;
		printf("%d inserted Successfully.\n",val);
	}
}

//Deletion Operation
void deQueue()
{
	if(front==-1)
	{
		printf("Queue is empty...Deletion Not Possible.\n");
	}
	else
	{
		printf("%d Deleted Successfully.\n",Queue[front]);
		front++;
		if(front>rear)
		{
			front=rear=-1;
		}
	}
}

//Display Operation
void display()
{
	if(rear==-1)
	{
		printf("Queue is empty...There is Nothing to display.\n");
	}
	else
	{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",Queue[i]);
		}
	}
}

//Main Function
int main()
{
	int choice,element;
	while(1)
	{
		printf("\n***ORDINARY QUEUE STORY***");
		printf("\n1.enQueue()\n 2.deQueue()\n 3.Display()\n 4.Stop()\n");
		printf("Select anyone :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to insert into the Queue :");
				scanf("%d",&element);
				enQueue(element);
				break;
			case 2:
				deQueue();
				break;
			case 3:
			    display();
				break;
			case 4:
				exit(0);
			default:
			    printf("Invalid Choice...Please Choice Again.\n");	
		}
	}
	return 0;
}
