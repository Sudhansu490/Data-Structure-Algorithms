//Malloc() Example 1
#include <stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr;
	ptr=(int*)malloc(5*sizeof(int));
	if(ptr!=NULL)
	{
		printf("Memory Allocated Successfully\n");
	}
}
