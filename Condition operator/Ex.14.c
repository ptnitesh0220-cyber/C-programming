#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a value:");
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
	printf("It is divisible by 3 and 5");
	else
	printf("It is not divisible by 3 and 5");
}