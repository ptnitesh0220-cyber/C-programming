#include<stdio.h>
void main()
{
	char a;
	printf("Enter any character:");
	scanf("%s",&a);
	if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
	{
	printf("It is vowel");
    }
	else
	{
	printf("It is consonant");
    }
}