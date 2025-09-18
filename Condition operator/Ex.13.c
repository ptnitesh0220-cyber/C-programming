#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a value:");
	scanf("%d",&a);
	if(a>0)
	printf("It is positive");
	else if(a<0)
	printf("It is negative");
	else
	printf("It is zero");
}