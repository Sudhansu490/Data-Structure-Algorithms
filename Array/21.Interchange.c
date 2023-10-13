//Program to interchange the Largest and Smallest element of an Array.
#include<stdio.h>
void interchange(int arr[],int n);
void display(int arr[],int n);

void interchange(int arr[],int n)
{
	int i,min=arr[0],max=arr[0],imin,imax,temp;
	for(i=0;i<n;i++)
	{
	    if(arr[i]<min)
	        min=arr[i];
	}
	for(i=0;i<n;i++)
	{
	    if(arr[i]>max)
	        max=arr[i];
	}
	for(i=0;i<n;i++)
	{
	    if(arr[i]==min)
	        imin=i;
	    if(arr[i]==max)
	        imax=i;
	}
	temp=arr[imax];
	arr[imax]=arr[imin];
	arr[imin]=temp;
}

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
	int arr[6]={10,2,30,4,50,78};
	printf("The Array before any change :\n");
	display(arr,6);
	interchange(arr,6);
	printf("\nThe Array after interchange :\n");
	display(arr,6);
	return 0;
}
