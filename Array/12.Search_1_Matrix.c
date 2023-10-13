//Search an element in a matrix(only 1 matrix)
#include<stdio.h>
int main()
{
	int a[3][3],key,found=0,i,j;
	
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
	
	printf("\nEnter a value that you want to search in the matrix\n");
	scanf("%d",&key);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==key)
			{
				found=1;
				break;
			}
		}
	}
	
	if(found==1)
	{
		printf("\nSearch Success.");
	}
	else
	{
		printf("\nSearch Fail.");
	}
	
	return 0;
}
