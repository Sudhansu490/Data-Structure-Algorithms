//Insert an element at last position of the Array.
#include<stdio.h>
int main()
{
	int a[10],ele,size,i;
	
	printf("Enter the size of an Array(MAx-10)\n");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter %d location value\n",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter an element to insert\n");
	scanf("%d",&ele);
	
	a[size]=ele;
	size++;
	
	printf("\nAfter inserting the new element we get this result\n");
	for(i=0;i<size;i++)
	{
		printf("The %d location value is %d\n",i,a[i]);
	}
	return 0;
}
