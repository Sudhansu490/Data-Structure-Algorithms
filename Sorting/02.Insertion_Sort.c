//Insertion Sort
#include<stdio.h>
int main()
{
	int a[5]={4,2,1,5,3},i,j,temp;
	printf("Before Sorting\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=1;i<5;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && a[j]>temp;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	printf("\nAfter Sorting\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
