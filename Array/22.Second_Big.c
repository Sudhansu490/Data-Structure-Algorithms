//Program to find the second largest element of an Array.
#include<stdio.h>
int main()
{
	int a[10]={10,15,45,75,25,35,60,50,80,85},i,max=a[0],imax,smax=a[0];
	printf("The entered Array is:");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(max<a[i]);
		{
			max=a[i];
			imax=i;
		}
    }
	a[imax]=0;
	for(i=0;i<10;i++)
	{
		if(smax<a[i])
		{
			smax=a[i];
		}
	}
	printf("\nThe second largest element is %d",smax);
	return 0;
}
