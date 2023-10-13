//Quick Sort 
#include<stdio.h>
void quickSort(int[],int,int);
int partition(int[],int,int);

//Body part of QuickSort()
void quickSort(int arr[],int start,int end)
{
	if(start<end)
	{
		int pIndex=partition(arr,start,end);
     	quickSort(arr,start,pIndex-1);
	    quickSort(arr,pIndex+1,end);
    }
}

//Body Part for Partition
int partition(int arr[],int start,int end)
{
	int pivot=arr[end];
	int i=start;
	int pIndex=start;
	int temp;
	for(i=start;i<end;i++)
	{
		if(arr[i]<pivot)
		{
			//Swap in between pIndex and i
			temp=arr[pIndex];
			arr[pIndex]=arr[i];
			arr[i]=temp;
			pIndex++;
		}
	}
	//Swap in between and pivot(end)
	temp=arr[pIndex];
	arr[pIndex]=arr[end];
	arr[end]=temp;
	return pIndex;
}

//Main Function()
int main()
{
	int arr[10]={12,11,34,55,23,110,89,999,888,10},i;
	printf("Before Sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	quickSort(arr,0,9);
	printf("\nAfter Sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
