//Dangling Pointer Example-3
#include<stdio.h>
int *test()
{
	int x =99;
	return &x;
}
void main()
{
	int *ptr =test()
	printf("%d\n",ptr);
}
