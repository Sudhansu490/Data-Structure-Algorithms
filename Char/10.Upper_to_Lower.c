//Input an Uppercase character and convert to lowercase character.
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter an uppercase charcter :");
	scanf("%c",&ch);
	
	printf("%c -----> %c",ch,tolower(ch));
	    
	return 0;
}
