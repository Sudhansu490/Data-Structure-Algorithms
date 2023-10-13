//Program to print all the Negative elements of an Array.
#include<stdio.h>
int main()
{
	int a[5]={14,-12,0,1,-1},i;
	
	printf("The elements in the Array is:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nThe Negative elements of the Array are:\n");
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
	}
	
	return 0;
}
