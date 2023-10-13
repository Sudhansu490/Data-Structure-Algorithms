//Program to copy all element of one Array to another.
#include<stdio.h>
int main()
{
	int arr1[6]={10,20,30,40,50,60},arr2[5],i;
	
	printf("\nThe first Array is:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",arr1[i]);
	}
	
	for(i=0;i<6;i++)
	{
		arr2[i]=arr1[i];
	}
	
	printf("\nThe second Array is:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",arr2[i]);
	}
	return 0;
}
