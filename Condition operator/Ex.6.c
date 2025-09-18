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
	if(a>b && a>c)
	{
	printf("The greater number is:%d",a);	
	}
	else if(b>a && b>c)
	{
		printf("The greater number is:%d",b);
	}
	else
	{
		printf("The greatest number is:%d",c);
	}
	
}