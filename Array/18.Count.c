//Program to count even & odd elements of an Array.
#include<stdio.h>
int main()
{
	int a[7]={1,25,36,93,27,16,0},i,even=0,odd=0;
	printf("The elements in the Array is:\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<7;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	
	printf("\nThere are %d even elements and %d odd elements in the above Array\n",even,odd);
	
	return 0;
}
