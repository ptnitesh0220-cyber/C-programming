#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter a value:");
	scanf("%d",&a);
	if(a>0 && (a&(a-1))==0)
	{
		printf("The number is power of 2");
	}
	else
	{
		printf("The number is not power of 2");
	}}