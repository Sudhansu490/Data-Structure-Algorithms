//Assigning and Accessing the element of Structure by using Pointer
#include<stdio.h>
#include<string.h>
struct employee{
	int eid;
	char ename[30];
	float esal;
};
struct employee e;
struct employee *ptr=&e;
int main()
{
	ptr->eid=101;
	strcpy(ptr->ename,"Rahul");
	ptr->esal=45000;
	
	printf("*****Employee Details*****\n");
	printf("%d\n %s\n %f\n",ptr->eid,ptr->ename,ptr->esal);
	return 0;
}
