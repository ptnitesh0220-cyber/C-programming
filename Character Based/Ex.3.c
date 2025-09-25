#include<stdio.h>
void main()
{
	char a;
	printf("Enter any value:");
	scanf("%c",&a);
	if(a>='a' && a<='z' )
	printf("It is alphabet");
	else
	printf("It is not alphabet");
}