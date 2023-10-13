//Swapping of two numbers by using call by reference
#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*p;//10
	*p=*q;//20
	*q=temp;//10
	printf("After swapping inside swap function p=%d, q=%d\n",*p,*q);
}
int main()
{
	int a=10,b=20;
	swap(&a,&b);//call by reference
	printf("After swapping inside main function a=%d, b=%d\n",a,b);
	return 0;
}
