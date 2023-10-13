//Insert an element at first position of the Array.
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
	
	//Shifting
	for(i=size-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=ele;
	size++;
	
	printf("\nAfter inserting the new element we get the result\n");
	for(i=0;i<size;i++)
	{
		printf("The %d location value is %d\n",i,a[i]);
	}
	return 0;
}
