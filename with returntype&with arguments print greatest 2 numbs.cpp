#include<stdio.h>
int greatest(int a,int b)
{
	return a>b?a:b;
}
main()
{
	int a=456,b=67;
	printf("%d",greatest(a,b));
}
