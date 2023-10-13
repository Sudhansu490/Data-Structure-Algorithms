//Nested Structure Program(Employee Details)
#include<stdio.h>
struct employee{
	int id;
	char name[20];
	struct dept{
		char desg[20];
		float salary;
	}d;
};
int main()
{
	struct employee e;
	printf("Enter Employee ID\n");
	scanf("%d",&e.id);
	printf("Enter Employee Name\n");
	fflush(stdin);
	gets(e.name);
	
	printf("Enter Employee Designation\n");
	fflush(stdin);
	gets(e.d.desg);
	printf("Enter Employee Salary\n");
	scanf("%f",&e.d.salary);
	
	printf("*****EMPLOYEE DETAILS*****\n");
	printf("Employee ID is %d\n",e.id);
	printf("Employee Name is %s\n",e.name);
	printf("Employee Designation is %s\n",e.d.desg);
	printf("Employee Salary is %f\n",e.d.salary);
    
	return 0;
}
