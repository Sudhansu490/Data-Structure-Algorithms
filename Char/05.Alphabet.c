//Check a Character is Alphabet or not.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Character :");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("\n%c is an Alphabet.",ch);
	}
	else
	{
		printf("\n%c is not an Alphabet.",ch);
	}
	return 0;
	
}
