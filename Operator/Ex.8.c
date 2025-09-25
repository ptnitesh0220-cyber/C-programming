#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a value:");
	scanf("%d",&a);
	b=a%10;
	printf("The last digit of %d is %d",a,b);
	
}