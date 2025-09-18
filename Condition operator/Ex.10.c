#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	c=a+b;
	if(c%2==0)
	printf("Even");
	else
	printf("Odd");
	
}
