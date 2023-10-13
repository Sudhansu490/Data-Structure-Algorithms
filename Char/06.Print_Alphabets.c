//Display all Lowercase and Uppercase Alphabet using loop.
#include<stdio.h>
int main()
{
	char ch;
	
	printf("Lowercase Alphabet :\n");
	for(ch='a';ch<='z';ch++)
	{
		printf("%c\t",ch);
	}
	
	printf("\n\nUppercase Alphabet :\n");
	for(ch='A';ch<='Z';ch++)
	{
		printf("%c\t",ch);
	}
	return 0;
}
