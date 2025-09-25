#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter a value:");
	scanf("%d",&b);
	c=a%b;
	printf("The remainder of %d and %d is %d",a,b,c);
}