//Program to interchange the first and last element of Array.
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50},i;
	a[4]=a[4]+a[0];
	a[0]=a[4]-a[0];
	a[4]=a[4]-a[0];
	printf("The interchange value is a[4]=%d,a[0]=%d\n",a[4],a[0]);
	
	printf("\nAfter interchange the Array is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
