//All Operations of Priority Queue
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int pQueue[SIZE],front=-1,rear=-1;

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
		return;
	}
	if((front==-1) && (rear==-1))
	{
		front++;
		rear++;
		pQueue[rear]=val;
		return;
	}
	else
	{
		check(val);
	}
	rear++;
}

//Body Part of check() function
void check(int val)
{
	int i,j;
	for(i=0;i<=rear;i++)
	{
		if(val>=pQueue[i])
		{
			for(j=rear+1;j>i;j--)
			{
				pQueue[j]=pQueue[j-1];
			}
			pQueue[i]=val;
			return;
		}
	}
	pQueue[i]=val;
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
		printf("%d Deleted Successfully.\n",pQueue[front]);
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
	int x;
	if((front==-1) && (rear==-1))
	{
		printf("\nQueue is empty...There is Nothing to display.\n");
		return;
	}
	for(x=front;x<=rear;x++)
	{
		printf("%d\t",pQueue[x]);
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
