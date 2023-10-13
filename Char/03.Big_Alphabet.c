//Check a Character is capital Alphabet or not.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Character :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\n%c is an Capital Alphabet.",ch);
	}
	else
	{
		printf("\n%c is not an Capital Alphabet.",ch);
	}
	return 0;
	
}
