
#include<stdio.h>
void info();
struct student{
	int roll;
	char name[30];
};
void info()
{
    struct student c={101,"Sonu"};
	struct student d={102,"Munu"};
	printf("Student Roll No:%d\n",d.roll);
	printf("Student Name:%s\n",d.name);
	printf("Student Roll No:%d\n",c.roll);
	printf("Student Name:%s\n",c.name);
}
int main()
{
	info();
	return 0;
}
