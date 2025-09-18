#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	if(a>b)
	{
	printf("The smallest number is:%d",b);	
	}
	else
	{
		printf("The smallest number is:%d",a);
	}
	
}