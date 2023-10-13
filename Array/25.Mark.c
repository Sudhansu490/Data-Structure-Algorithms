//Program to read a '2D' Array marks which stores highest mark in each subject.
#include<stdio.h>
int main()
{
	int arr[4][4],i,j,phy=0,chem=0,math=0,IT=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter the mark of student-%d in sub-%d :",j+1,i+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==0)
			{
				if(phy<arr[i][j])
				    phy=arr[i][j];
			}
			if(i==1)
			{
				if(chem<arr[i][j])
				    chem=arr[i][j];
			}
			if(i==2)
			{
				if(math<arr[i][j])
				    math=arr[i][j];
			}
			if(i==3)
			{
				if(IT<arr[i][j])
				    IT=arr[i][j];
			}
		}
	}
	printf("\nThe highest mark in Physics(sub-1) is %d\n",phy);
	printf("\nThe highest mark in Chemistry(sub-2) is %d\n",chem);
	printf("\nThe highest mark in Math(sub-3) is %d\n",math);
	printf("\nThe highest mark in IT(sub-4) is %d",IT);
	return 0;
}
