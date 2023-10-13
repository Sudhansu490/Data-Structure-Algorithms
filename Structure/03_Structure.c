//Structure Type 3(Take Input from the User at Runtime and Assign those Value to Structure Variable)
#include<stdio.h>
struct student{
	int roll,age;
	char name[20],course[10];
};

int main()
{
	struct student info;
	printf("Enter Roll No\n");
	scanf("%d",&info.roll);
	printf("Enter age \n");
	scanf("%d",&info.age);
	printf("Enter Name\n");
	fflush(stdin);
	gets(info.name);
	printf("Enter Course\n");
	scanf("%s",info.course);
	
	printf("*****STUDENT INFORMATION*****\n");
	printf("Roll No. is %d\n",info.roll);
	printf("Age is %d\n",info.age);
	printf("The Name is %s\n",info.name);
	printf("Pursuing a Course is %s\n",info.course);
    
	return 0;
}
