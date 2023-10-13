//Malloc Memory Allocation
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int *ptr;
	
	//Memory Creation
	ptr =(int*)malloc(5*sizeof(int));
	
	//NULL Check operation
	if(ptr!=NULL)
	{
		printf("Memory Allocated Successfully\n");
    }
    
	//Display The Output
	printf("%d\n",*(ptr+0));
	printf("%d\n",*(ptr+1));
	printf("%d\n",*(ptr+2));
	printf("%d\n",*(ptr+3));
	printf("%d\n",*(ptr+4));
}
