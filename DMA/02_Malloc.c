//Malloc Example 2
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr;
	while(1)
	{
		ptr=(int*)malloc(sizeof(int*));
	}
}
