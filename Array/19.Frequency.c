//Program to count the frequency of each elements of an Array.
#include<stdio.h>
int main()
{
	int a[6]={1,2,1,3,4,2},freq[6]={1,1,1,1,1,1},i,j;
	printf("The elements in the Array is:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]==a[j])
			{
				freq[i]++;
			}
		}
	}
	
	for(i=0;i<6;i++)
	{
		printf("\nThe frequency of %d is %d times.\n",a[i],freq[i]);
	}
	
	return 0;
}
