#include<stdio.h>
int reverse(int n)
{
	static int rev=0;
	if(n)
	{
		rev=rev*10+n%10;
		reverse(n/10);
	}
	else
		return 0;
	return rev;
}
int main()
{
	int n,rev=0;
	scanf("%d",&n);
	rev=reverse(n);
	printf("reverse=%d\n",rev);
	return 0;
}
