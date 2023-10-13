//What is the output of below code?
#include<stdio.h>
struct employee{
	int eid;
	char ename[30];
	float esal;
};
struct employee e;
struct employee *ptr=&e;
int main()
{
	printf("%u\n",&e);
	printf("%u\n",ptr);
	return 0;
}
