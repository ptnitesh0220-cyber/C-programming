#include<stdio.h>
void main()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	if(a & 1)
	printf("odd");
	else
	printf("even");
}