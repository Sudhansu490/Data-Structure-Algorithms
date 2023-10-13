//Malloc Example 3
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
	
	//Assigning The Value
	*(ptr+0)=10;
	*(ptr+1)=20;
	*(ptr+2)=30;
	*(ptr+3)=40;
	*(ptr+4)=50;
	
	//Display The Output
	printf("%d\n",*(ptr+0));
	printf("%d\n",*(ptr+1));
	printf("%d\n",*(ptr+2));
	printf("%d\n",*(ptr+3));
	printf("%d\n",*(ptr+4));
}
