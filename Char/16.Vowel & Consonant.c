//Enter your Name then count the Number of vowels and consonants.
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100]=" ";
	int i,nov=0,noc=0;
	printf("Enter your Name(max size is 99):");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
		{
			nov++;
		}
		else
		{
			noc++;
		}
	}
	printf("\nNumber of Vowel is %d",nov);
	printf("\nNumber of Consonant is %d",noc);
	return 0;
}
