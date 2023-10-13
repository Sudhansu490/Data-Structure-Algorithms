//Dangling Pointer Example-2
#include<stdio.h>
void main()
{
	int *ptr;
	{
		int x=888;
		ptr =&x;
	}
	ptr=NULL;
	printf("%u\n",ptr);
	printf("%u\n",*ptr);
}
