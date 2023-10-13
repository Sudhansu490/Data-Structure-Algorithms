//Find the maximum and minimum value of an Array.
#include<stdio.h>
int main()
{
	int a[10],max=a[0],min,i,size;
	printf("Enter the size of an Array(MAX-10)\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter %d location value\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(max<a[1+i])
		{
			max=a[1+i];
		}
		min=a[0];
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("\nThe Maximum value is %d and The Minimum value is %d",max,min);
	return 0;
}
