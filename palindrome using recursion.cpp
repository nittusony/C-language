#include<stdio.h>
int palindrome(int n,int r)
{
	if(n==0)
	return r;
	int rem=n%10;
	r=r*10+rem;
	return palindrome(n/10,r);
	}
	main()
	{
		int n;
		printf("enter number:");
		scanf("%d",&n);
		int reverse=palindrome(n,0);
		if(n==reverse)
		printf("palindrome");
		else
		printf("not a palindrome");
	}

