//All operations on Stack.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE],top=-1;

//Function Prototypes
void push(int);
void pop();
void display();
void peek();

//Insert Operation
void push(int val)
{
	if(top==SIZE-1)
	{
		printf("Stack is full...Insertion Not Possible.\n");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("%d inserted Successfully.\n",val);
	}
}

//Delete Operation
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty...Deletion Not Possible.\n");
	}
	else
	{
		printf("%d Deleted Successfully.\n",stack[top]);
		top--;
	}
}

//Display Operation
void display()
{
	int i;
	if(top==-1)
	{
		printf("Nothing is there in Stack.\n");
	}
	else
	{
		printf("the Elements present in Stack :");
		for(i=top;i>=0;i--)
		{
			printf("%d\t",stack[i]);
		}
	}
}

//Peek Operation
void peek()
{
	if(top==-1)
	{
		printf("Stack is empty...There is Nothing to peek.\n");
	}
	else
	{
		printf("The top element is %d",stack[top]);
	}
}

//Main Function
int main()
{
	int choice,element;
	while(1)
	{
		printf("\n*******STACK STORY*******");
		printf("\n1.Push()\n 2.Pop()\n 3.Display()\n 4.Peek()\n 5.Stop()\n");
		printf("Select anyone :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to push into the Stack :");
				scanf("%d",&element);
				push(element);
				break;
			case 2:
				pop();
				break;
			case 3:
			    display();
				break;
			case 4:
				peek();
				break;
			case 5:
			    exit(0);
			default:
			    printf("Invalid Choice...Please Choice Again.\n");	
		}
	}
	return 0;
}
