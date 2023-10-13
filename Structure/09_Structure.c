//Print Address of all the element of Structure
#include<stdio.h>
struct employee{
	int eid;
	char ename[30];
	float esal;
};
struct employee e;
int main()
{
	printf("*****Printing Address*****\n");
	printf("%u\n",&e);
	printf("%u\n",&e.eid);
	printf("%u\n",e.ename);
	printf("%u\n",&e.esal);
	return 0;
}
