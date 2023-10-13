//Check a Charcter is Space or not.
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a Charcter :");
	scanf("%c",&ch);
	
	if(isspace(ch))
	    printf("\nYes, you entered Space.");
	else
	    printf("\nNo, it is not Space.");
	    
	return 0;
}
