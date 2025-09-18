#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	printf("Enter c value");
	scanf("%d",&c);
	if(a>b && c>b)
	{
	printf("The smallest number is:%d",b);	
	}
	else if(b>a && c>a)
	{
		printf("The smallest number is:%d",a);
	}
	else
	{
		printf("The smallest number is:%d",c);
	}
	
}