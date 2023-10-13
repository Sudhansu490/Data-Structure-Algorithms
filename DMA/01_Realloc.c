//Realloc()- Reallocation
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int *ptr;
	
	//Memory Creation
	ptr =(int*)malloc(5*sizeof(int));
	ptr=realloc(ptr,2*sizeof(int));
	ptr=realloc(ptr,6*sizeof(int));
}
