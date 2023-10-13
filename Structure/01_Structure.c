//Structure Type 1(At a time assign value to all members of Structure)
#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	char course[10];
};
int main()
{
	struct student obj1={101,"Anil","Btech"};
	
	printf("*****STUDENT INFORMATION 1*****\n");
	printf("Roll No. is %d\n",obj1.rollno);
	printf("The Name is %s\n",obj1.name);
	printf("Pursuing a Course is %s\n",obj1.course);

    struct student obj2={102};
    
	printf("*****STUDENT INFORMATION 2*****\n");
	printf("Roll No. is %d\n",obj2.rollno);
	printf("The Name is %s\n",obj2.name);
	printf("Pursuing a Course is %s\n",obj2.course);
	
	struct student obj3={};
	
	printf("*****STUDENT INFORMATION 3*****\n");
	printf("Roll No. is %d\n",obj3.rollno);
	printf("The Name is %s\n",obj3.name);
	printf("Pursuing a Course is %s\n",obj3.course);
    
    struct student obj4;
    
    printf("*****STUDENT INFORMATION 4*****\n");
	printf("Roll No. is %d\n",obj4.rollno);
	printf("The Name is %s\n",obj4.name);
	printf("Pursuing a Course is %s\n",obj4.course);
    
	return 0;
}
