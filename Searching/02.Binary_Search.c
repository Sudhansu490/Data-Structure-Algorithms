//Search an element from an Array using Binary Search.
#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,55,66,78,89,95,97},low=0,high=9,key=95,mid,found=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			found=1;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
	}
	if(found==1)
	{
		printf("Search Success.\n");
	}
	else
	{
		printf("Search Fail.\n");
	}
	return 0;
}
