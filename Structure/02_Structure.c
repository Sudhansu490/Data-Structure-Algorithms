//Structure Type 2(Individually Assign Value and Access)
#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[20];
	char course[10];
};

int main()
{
	struct student obj;
	
	obj.rollno=101;
	//Assigning String value to Structure
	strcpy(obj.name,"Rahul");
	strcpy(obj.course,"Btech");
	
	printf("*****STUDENT INFORMATION*****\n");
	printf("Roll No. is %d\n",obj.rollno);
	printf("The Name is %s\n",obj.name);
	printf("Pursuing a Course is %s\n",obj.course);
    
	return 0;
}
