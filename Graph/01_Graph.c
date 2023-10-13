//Write a Program to represent a graph using Adjacency Matrix
#include<stdio.h>
#define V 5

//init() function for adding 0 to each cell
void init(int arr[V][V])
{
	int i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			arr[i][j]=0;
		}
	}
}

//addEdge function
void addEdge(int arr[V][V],int src,int dest)
{
	arr[src][dest]=1;
}

//Display Function
void display(int arr[V][V])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}

//Check whether a Edge is exist or not
void isExist(int arr[V][V],int src,int dest)
{
	if(arr[src][dest]==1)
	{
		printf("\nEdge is existed in between %d and %d\n",src,dest);
	}
	else
	{
		printf("\nEdge is not existed in between %d and %d\n",src,dest);
	}
}

//Revove Edge
void removeEdge(int arr[V][V],int src,int dest)
{
	arr[src][dest]=0;
	printf("\nEdge is removed in between %d and %d\n",src,dest);
}

//Main Function
int main()
{
	int adjMatrix[V][V];
	init(adjMatrix);
	display(adjMatrix);
	addEdge(adjMatrix,0,1);
	addEdge(adjMatrix,0,2);
	addEdge(adjMatrix,1,3);
	addEdge(adjMatrix,1,4);
	addEdge(adjMatrix,2,3);
	addEdge(adjMatrix,3,4);
	printf("---------------------------------\n");
	display(adjMatrix);
	isExist(adjMatrix,0,1);
	removeEdge(adjMatrix,0,1);
	isExist(adjMatrix,0,1);
	return 0;
}
