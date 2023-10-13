//Check a Charcter is hexadecimal character or not.
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a charcter :");
	scanf("%c",&ch);
	
	if(isxdigit(ch)!=0)
	    printf("\n%c is a hexadecimal character.",ch);
	else
	    printf("\n%c is not a hexadecimal character.",ch);
	    
	return 0;
}
