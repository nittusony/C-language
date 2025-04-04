#include<stdio.h>
main()
{
	int n,r,sum=0;
	int temp=n;
	printf("enter n");
	scanf("%d",&n);
	for(temp=n;n!=0;n=n/10)
	{
		r=n%10;
		sum=sum*10+r;
n/10;
}
n=temp;
	if(n==sum)
	{
	printf("palindrome");
    }
	else
	printf("not a palindrome");
}

