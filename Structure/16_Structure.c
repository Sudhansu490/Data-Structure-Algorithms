
#include<stdio.h>
struct student{
	int roll;
	char name[30];
};
int main()
{
    struct student std={101,"Sonu"};
	struct student d={102,"Munu"};
	info(std.roll,std.name);
	info1(d.roll,d.name);
	return 0;
}
void info(int roll,char name[])
{
	printf("Student Name:%s\n",name);
	printf("Student Roll No:%d\n",roll);
}
void info1(int roll,char name[])
{
	printf("Student Roll No:%d\n",roll);
	printf("Student Name:%s\n",name);
}
