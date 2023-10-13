//All Operations of Circular Queue
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int cQueue[SIZE],front=-1,rear=-1;

//Function Prototypes
void enQueue(int);
void deQueue();
void display();

//Insert Operation
void enQueue(int val)
{
	if((front==0 && rear==SIZE-1)||(front==rear+1))
	{
		printf("Circular Queue is full...Insertion Not Possible.\n");
	}
	else
	{
		if(rear==SIZE-1 && front!=0)
		{
			rear=-1;
		}
		rear++;
		cQueue[rear]=val;
		printf("%d inserted Successfully.\n",cQueue[rear]);
		if(front==-1)
		{
			front=0;
		}
	}
}

//Deletion Operation
void deQueue()
{
	if(front==-1 && rear==-1)
	{
		printf("Circular Queue is empty...Deletion Not Possible.\n");
	}
	else
	{
		printf("%d Deleted Successfully.\n",cQueue[front]);
		front++;
		if(front-1==rear)
		{
			front=rear=-1;
		}
		else
		{
			if(front==SIZE)
			{
				front=0;
			}
		}
	}
}

//Display Operation
void display()
{
	if(front==-1)
	{
		printf("Queue is empty...There is Nothing to display.\n");
	}
	else
	{
		int i=front;
		printf("Circular Queue elements are :\n");
		if(front<=rear)
		{
		    while(i<=rear)
		    {
		    	printf("%d\t",cQueue[i++]);
			}
		}
		else
		{
			while(i<=SIZE-1)
			{
				printf("%d\t",cQueue[i++]);
			}
			i=0;
			while(i<=rear)
			{
				printf("%d\t",cQueue[i++]);
			}
		}
	}
}

//Main Function
int main()
{
	int choice,element;
	while(1)
	{
		printf("\n***CIRCULAR QUEUE STORY***");
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
