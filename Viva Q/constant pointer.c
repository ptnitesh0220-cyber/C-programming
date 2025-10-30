#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	int *const ptr=&a;
	printf("%d",*ptr);
}