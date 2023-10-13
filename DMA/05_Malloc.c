//Allocated Memory Address Using For Loop
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int *ptr,n,i;
	
	//Choose Size
	printf("Enter Size\n");
	scanf("%d",&n);
	
	//Memory Creation
	ptr =(int*)malloc(n*sizeof(int));
	
	printf("Allocated Memory Successfully\n");
	for(i=0;i<n;i++)
	{
		printf("%p\n",ptr+i);
	}
}
