//Input a character to check it is Alpha numeric or not.
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a charcter :");
	scanf("%c",&ch);
	
	if (isalnum(ch)!=0) 
	{
        printf("\n'%c' is an Alphanumberic Character .",ch);
    } 
    else 
	{
        printf("\n'%c' is not an Alphanumberic Character.",ch);
    }
  
	return 0;
}
