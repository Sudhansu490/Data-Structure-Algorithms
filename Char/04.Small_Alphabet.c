//Check a Character is small Alphabet or not.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Character :");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("\n%c is an Small Alphabet.",ch);
	}
	else
	{
		printf("\n%c is not an Small Alphabet.",ch);
	}
	return 0;
	
}
