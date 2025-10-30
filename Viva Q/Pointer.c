#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	int *b;
	b=&a;
	printf("%d",*b);
}