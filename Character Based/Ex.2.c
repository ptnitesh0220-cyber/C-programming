#include<stdio.h>
void main()
{
	char a;
	printf("Enter any character:");
	scanf("%c",&a);
	if(a>='A' && a<='Z')
	{
		printf("It is uppercase");
	}
	else if(a>='a' && a<='z')
	{
		printf("It is lowercase");
	}
	else if(a>='0' && a<='9')
	{
		printf("It is digit");
	}
	else
	{
		printf("It is special symbol");
	}
	
}
