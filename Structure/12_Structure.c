//Create a Structure and create two Structure variable then assign values to first Structure variable then copy all value to 2nd 
//Structure then Display first and second Structure value.
#include<stdio.h>
struct student{
	int roll;
	char name[20];
};
int main()
{
	struct student s1,s2;
	printf("Enter Roll No\n");
	scanf("%d",&s1.roll);
	printf("Enter Name\n");
	fflush(stdin);
	gets(s1.name);
	
	s2=s1;
	printf("Values in First Structure\n");
	printf("Roll No. is %d\n",s1.roll);
	printf("The Name is %s\n",s1.name);
	
	printf("Values in Copied Structure\n");
	printf("Roll No. is %d\n",s2.roll);
	printf("The Name is %s\n",s2.name);
    
	return 0;
}
