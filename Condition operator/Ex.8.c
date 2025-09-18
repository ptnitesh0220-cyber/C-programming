#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a value:");
	scanf("%d",&a);
	b=a%10;
	printf("%d\n",b);
	if(b%3==0)
	printf("It is divisible by 3");
	else
	printf("It is not divisible by 3");
	
}