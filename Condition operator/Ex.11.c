#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a value:");
	scanf("%d",&a);
	b=a/100;
	printf("%d\n",b);
	if(b%2==0)
	printf("Even");
	else
	printf("Odd");
}