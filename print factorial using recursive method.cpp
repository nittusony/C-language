#include<stdio.h>
int factorial(int);
main()
{
	int n=5;
	printf("%d",factorial(n));
}
int factorial(int n)
{
	int r;
	if(n==0)
	r=1;
	else
	r=n*factorial(n-1);
	return r;
}

