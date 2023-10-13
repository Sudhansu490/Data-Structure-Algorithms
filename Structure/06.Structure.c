//Wap using Structure,find the greatest one among three numbers
#include<stdio.h>
struct greatest{
	int a,b,c;
};
void main()
{
	struct greatest no;
	printf("Enter First Number\n");
	scanf("%d",&no.a);
	printf("Enter Second Number\n");
	scanf("%d",&no.b);
	printf("Enter Third Number\n");
	scanf("%d",&no.c);
	
	printf("The First Number is %d\n",no.a);
	printf("The Second Number is %d\n",no.b);
	printf("The Third Number is %d\n",no.c);
	
	if(no.a>no.b && no.a>no.c)
	{
		printf("%d is the Greatest Number",no.a);
	}
	else if(no.b>no.c && no.b>no.a)
	{
		printf("%d is the Greatest Number",no.b);
	}
	else 
	{
		printf("%d is the Greatest Number",no.c);
	}
}
