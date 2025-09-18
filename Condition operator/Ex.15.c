#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a value:");
	scanf("%d",&a);
	if(a%3==0 || a%7==0)
	printf("It is divisible either 3 or 7");
	else
	printf("It is not divisible by 3 and 7");
}