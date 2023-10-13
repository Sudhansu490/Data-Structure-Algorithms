//Enter your Name then count the Number of uppercase and lowercase letters.
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]=" ";
	int i,nou=0,nol=0;
	printf("Enter your Name(max size is 99):");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65 && name[i]<=91)
		{
			nou++;
		}
		else
		{
			nol++;
		}
	}
	printf("\nNumber of uppercase letter is %d",nou);
	printf("\nNumber of lowercase letter is %d",nol);
	return 0;
}
