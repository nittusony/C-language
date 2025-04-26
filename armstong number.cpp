#include<stdio.h>
#include<math.h>
int order(int x)
{
	int len=0;
	while(x)
	{
		len++;
		x=x/10;
	}
	return len;
}
int armstrong(int n,int order)
{
	if(n==0)
	return 0;
	int digit=n%10;
	return pow(digit,order)+armstrong(n/10,order);
}
main()
{
	int n,l;
	printf("enter number:");
	scanf("%d",&n);
	l=order(n);
	if(n==armstrong(n,l))
	printf("armstong");
	else
	printf("not armstrong");
	}

