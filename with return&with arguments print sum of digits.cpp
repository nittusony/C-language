#include<stdio.h>
int sum_of_digits(int a)
{
	int r,sum=0;
	while(a>0)
	{
		r=a%10;
		sum=sum+r;
		a=a/10;
	}
	return sum;
}
main()
{
	int a=124;
	printf("%d",sum_of_digits(a));
	}
