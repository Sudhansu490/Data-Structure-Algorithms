//Insert an element at any specified position of the Array.
#include<stdio.h>
int main()
{
	int a[10],ele,size,pos,i;
	
	printf("Enter the size of an Array(MAx-10)\n");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter %d location value\n",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter an element to insert\n");
	scanf("%d",&ele);
	printf("\nEnter the Position\n");
	scanf("%d",&pos);
	
	//Shifting
	for(i=size-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=ele;
	size++;
	
	printf("\nAfter inserting the new element we get this result\n");
	for(i=0;i<size;i++)
	{
		printf("The %d location value is %d\n",i,a[i]);
	}
	return 0;
}
