#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter a value:");
	scanf("%d",&a);
	b=a%10;
	c=a/100;
	d=b+c;
	printf("The sum of %d and %d is %d",c,b,d);
}