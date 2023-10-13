//Addition of two 3D Matrix(4*3*3 Matrix)
#include<stdio.h>
int main()
{
	int a[4][3][3],b[4][3][3],c[4][3][3],i,j,k;
	
	printf("\nEnter the value for 'a' matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("Enter a[%d][%d][%d] location value:\n",i,j,k);
			    scanf("%d",&a[i][j][k]);
			}
		}
	}
	
	printf("\nEnter the value for 'b' matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("Enter b[%d][%d][%d] location value:\n",i,j,k);
			    scanf("%d",&b[i][j][k]);
			}
		}
	}
	
	printf("\nThis is 'a' matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d\t",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}

    printf("\nThis is 'b' matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d\t",b[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	
	printf("\nAfter Addition of 'a' and 'b' Matrix we get this result:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				c[i][j][k]=a[i][j][k]+b[i][j][k];
				printf("%d\t",c[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	
	return 0;
}
