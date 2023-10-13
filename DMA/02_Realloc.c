//Realloc Example using Loop
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i,ns;
	
	//Choosing Size
	printf("Enter Size\n");
	scanf("%d",&n);
	
	//Memory Creation
	ptr=(int*)malloc(n*sizeof(int));
	printf("Intial Allocated Memory Address\n");
	
	for(i=0;i<n;i++)
	{
		printf("%u\n",ptr+i);
	}
	
	//Increase or Decrease Memory Size
	printf("Enter New Size\n");
	scanf("%d",&ns);
	
	//Resize The Memory
	ptr=realloc(ptr,ns*sizeof(int));
	printf("After increase decrease Allocated Memory address\n");
	
	for(i=0;i<ns;i++)
	{
		printf("%u\n",ptr+i);
	}
	return 0;
}
