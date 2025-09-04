#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50];
	printf("Enter any msg:");
	scanf("%[^\n]s",&a);
	printf("your msg:%s",a);
}