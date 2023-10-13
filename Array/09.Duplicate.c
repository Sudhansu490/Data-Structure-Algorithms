//Find duplicate elements from an 1D Array.
#include<stdio.h>
int main()
{
	int a[10]={10,30,50,70,90,20,40,30,70,50},i,j;
	printf("The entered array is :\n");
	for (i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nDulplicate elements are :\n");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d\t",a[j]);
			}
		}
	}
	return 0;
}
