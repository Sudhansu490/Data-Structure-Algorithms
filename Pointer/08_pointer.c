//Void pointer
#include<stdio.h>
void main()
{
	int i=100;
	char ch ='@';
	void *ptr =&i;
	void *ptr1 = &ch;
	printf("%d\n",*(int*)ptr);
	printf("%c\n",*(char*)ptr1);
}
