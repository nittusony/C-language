#include <stdio.h>
int prime(int n,int i)
{
	if(n<2)
	return 0;
	if(i==n)
	return 1;
	if(n%i==0)
	return 0;
	i=i+1;
	return prime(n,i);
}
main()
{
	int i=2;
	 int n=7;
	if(prime(n,i))
	printf("%d prime number",n);
	else
	printf("%d not a prime",n);
}
