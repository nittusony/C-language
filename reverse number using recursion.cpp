#include<stdio.h>
int reverse(int n,int r)
{
	if(n==0)
	return r;
	int rem=n%10;
	r=r*10+rem;
	return reverse(n/10,r);
}
main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int result =reverse(n,0);
	printf("%d");
}
