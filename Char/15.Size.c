//Input your Name then find its length.
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]=" ";
	int i;
	printf("Enter your Name(max size is 99):");
	gets(name);
	printf("\nSize is %d",strlen(name));
	return 0;
}
