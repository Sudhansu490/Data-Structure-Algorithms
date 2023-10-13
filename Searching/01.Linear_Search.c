//Search an element from an Array using Linear Search.
#include<stdio.h>
int main()
{
	int a[5]={10,20,555,77,3},i,key=55,found=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			printf("Search Success\n");
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("Search Failure\n");
	}
	return 0;
}
