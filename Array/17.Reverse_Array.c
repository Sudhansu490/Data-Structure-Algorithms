//Profram to Reverse an Array.
#include<stdio.h>
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9},i,temp,size=10;
	printf("The elements in the Array is:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<size/2;i++)
	{
		temp=a[i];
		a[i]=a[size-i-1];
		a[size-i-1]=temp;
	}
	printf("\nThe Array after Reversing:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
