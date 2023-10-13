//Program to read a sorted Array then find out the average of the elments#include<stdio.h>
#include<stdio.h>
int main()
{
    int arr[10]={1,11,21,31,41,51,61,71,81,91},i,sum=0;
    printf("the array is :\n");
    for(i=0;i<10;i++)
    {
	    printf("%d\t",arr[i]);
    }
    for(i=0;i<10;i++)
    {
	    sum+=arr[i];
    }
    printf("\nthe average of all element is %d",sum/10);	
	return 0;
}
