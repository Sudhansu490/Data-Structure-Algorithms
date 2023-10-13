//Check a Charcter is Alphabet or not[using isalpha()]
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a Charcter :");
	scanf("%c",&ch);
	
	if(isalpha(ch))
	    printf("\n%c is an Alphabet.",ch);
	else
	    printf("\n%c is not an Alphabet.",ch);
	    
	return 0;
}
