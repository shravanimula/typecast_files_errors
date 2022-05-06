#include<stdio.h>
int sum(int ,int);
int Main()//linker error
{
	int a=10,b=20;
	printf("Sum of %d and %d is=%d\n",a,b,sum(a,b));
}	
int sum(int a, int b)
{
	return a+b;
}
