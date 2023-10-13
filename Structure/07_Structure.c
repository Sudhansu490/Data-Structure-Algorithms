//Wap using Structure take input a student details information and display it using Nested Structure.
#include<stdio.h>
struct student{
	int roll,age;
	char name[25];
	char branch[20];
	struct date{
		int d,m,y;
	}dob,doa;
};
void main()
{
	struct student s;
	printf("Enter Roll Number\n");
	scanf("%d",&s.roll);
	printf("Enter age\n");
	scanf("%d",&s.age);
	printf("Enter the Name\n");
	fflush(stdin);
	gets(s.name);
	printf("Enter the Branch\n");
	fflush(stdin);
	gets(s.branch);
	
	printf("Enter Date of Birth\n");
	scanf("%d-%d-%d",&s.dob.d,&s.dob.m,&s.dob.y);
	printf("Enter Date of Admission\n");
	scanf("%d-%d-%d",&s.doa.d,&s.doa.m,&s.doa.y);
	
	printf("*****STUDENT DETAILS*****\n");
	printf("The Roll No. is %d\n",s.roll);
	printf("The Name is %s\n",s.name);
	printf("The Branch is %s\n",s.branch);
	printf("The Date of Birth is %d-%d-%d\n",s.dob.d,s.dob.m,s.dob.y);
	printf("The Date of Admission is %d-%d-%d\n",s.doa.d,s.doa.m,s.doa.y);
}
