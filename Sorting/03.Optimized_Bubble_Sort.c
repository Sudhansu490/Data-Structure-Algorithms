//Optimized Bubble Sort
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,5,4},i,j,temp,check;
	printf("Before Sorting\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<4;i++)
	{
		check=0;
		for(j=0;j<4-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				check=1;
			}
		}
		if(check==0)
		{
			break;
		}
	}
	printf("\nAfter Sorting\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
