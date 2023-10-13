//Addition of two materix(by taking user input)
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	
	//input for matrix 'a'
	printf("\nEnter the value for 'a' matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] location value\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//input for matrix 'b'
	printf("\nEnter the value for 'b' matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter b[%d][%d] location value\n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	//output -> 'c' matrix
	printf("\nAfter addition of 'a' and 'b' matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
