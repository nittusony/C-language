#include<stdio.h>
main()
{
	int n=121,sum=0,r;
	int temp=n;
	{
	for(;n!=0;n/10)
	{
		r=n%10;
		sum=sum*10+r;
	}
	if(n==sum)
		printf("palindrome");
	else
		printf("not palindrome");
	
	}
}
