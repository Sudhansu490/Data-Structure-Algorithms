//Program to merge two unsorted Array.
#include<stdio.h>
void display(int arr[],int n);

void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}

int main()
{
	int arr1[]={10,20,2,45,21},arr2[]={20,50,21,4,23,25,36},merge[12],i,j=0;
	printf("The first array is :\n");
	display(arr1,5);
	printf("\nThe second array is :\n");
	display( arr2,7);
	for(i=0;i<12;i++)
	{
		if(i<5)
		    merge[i]=arr1[i];
		if(i>=5)
		{
			merge[i]=arr2[j];
			j++;
		}	
	}
	printf("\nThe merged array is :\n");
	display(merge,12);
	return 0;
}
