//Dangling Pointer Example-1
#include<stdio.h>
void main()
{
	int *ptr;
	{
		int x=90;
		ptr = &x;
	}
	printf("%u\n",ptr);
	printf("%u\n",*ptr);
}
