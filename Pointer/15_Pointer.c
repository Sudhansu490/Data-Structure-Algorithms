//Swapping of two numbers by using call by value
#include<stdio.h>
void swap(int,int);
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping inside swap function a=%d, b=%d\n",a,b);
}
int main()
{
	int a=10,b=20;
	swap(a,b);//call by value
	printf("After swapping inside main function a=%d, b=%d\n",a,b);
	return 0;
}
