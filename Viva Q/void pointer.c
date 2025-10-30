#include<stdio.h>
void main()
{
	int a;
	float b;
	scanf("%d%f",&a,&b);
	void *ptr;
	ptr=&a;
	printf("%d\n",*(int *)ptr);
	ptr=&b;
	printf("%f",*(float *)ptr);
	
}