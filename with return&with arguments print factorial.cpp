#include<stdio.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	fact=fact*i;
	return fact;
}
main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	printf("%d",factorial(a));	
}

