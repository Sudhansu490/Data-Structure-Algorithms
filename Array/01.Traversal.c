//Traversal of an Array
#include<stdio.h>
int main()
{
	int mark[11]={87,78,99,94,65,66,78,89,25,33,22},i,mid;
	printf("Before Reverse\n");
	for(i=0;i<11;i++)
	{
		printf("%d\t",mark[i]);
	}
	printf("\nAfter Reverse\n");
	for(i=10;i>=0;i--)
	{
		printf("%d\t",mark[i]);
	}
	mid=(0+10)/2;
	printf("\nHalf of the Array\n");
	for(i=0;i<mid;i++)
	{
		printf("%d\t",mark[i]);
	}
	return 0;
}
