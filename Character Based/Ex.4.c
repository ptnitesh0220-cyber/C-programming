#include<stdio.h>
void main()
{
	char a;
	printf("Enter any value:");
	scanf("%c",&a);
	if(a>='0' && a<='9')
	printf("It is digit");
	else
	printf("It is not digit");
}