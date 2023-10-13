//Use Array of Structure store 10 students record and search details of a student by using Roll Number.
#include<stdio.h>
struct student{
	int roll;
	char name[20],course[10];
};
int main()
{
	struct student s[10];
	int i,r;
	for(i=0;i<10;i++)
	{
		printf("Record for Student %d\n",i+1);
		printf("Enter Roll No\n");
	    scanf("%d",&s[i].roll);
	    printf("Enter Name\n");
	    fflush(stdin);
	    gets(s[i].name);
    	printf("Enter Course\n");
	    scanf("%s",s[i].course);
	}
	printf("Enter the Roll No. to access student details\n");
	scanf("%d",&r);
	
	printf("*****STUDENT DETAILS*****\n");
	for(i=0;i<10;i++)
	{
		if(r == s[i].roll)
		{
			printf("Roll No. is %d\n",s[i].roll);
	        printf("The Name is %s\n",s[i].name);
        	printf("Pursuing a Course is %s\n",s[i].course);
        	break;
		}
	}	
	return 0;
}
