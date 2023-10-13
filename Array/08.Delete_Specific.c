//Delete an element at specific position of the Array.
#include<stdio.h>
int main()
{
	int a[10],size,loc,i;
	
	printf("Enter the size of an Array(MAx-10)\n");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter %d location value\n",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter index to delete an element\n");
	scanf("%d",&loc);
	
	for(i=loc;i<=size;i++)
	{
		a[i]=a[i+1];
	}
	size--;
	
	printf("\nAfter delete the element we get this result\n");
	for(i=0;i<size;i++)
	{
		printf("The %d location value is %d\n",i,a[i]);
	}
	return 0;
}
