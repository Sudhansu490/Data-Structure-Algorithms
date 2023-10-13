//Reverse od 2D Matrix(4*5 shape matrix)
#include<stdio.h>
int main()
{
	int a[4][5],i,j;
	
	printf("\nEnter the value for 'a' matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter a[%d][%d] location value\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nBefore Reversing\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
     
	printf("\nAfter Reversing\n");
	for(i=3;i>=0;i--)
	{
		for(j=4;j>=0;j--)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	 	
	return 0;
}
