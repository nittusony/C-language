#include<stdio.h>
void palindrome(int);
void (*ptr)(int);
main()
{
	int a,i,n;
	printf("enter number");
	scanf("%d",&n);
	ptr=&palindrome;
	printf("%d\n",ptr);
	palindrome(n);
}
void palindrome(int n)
{
	int sum=0,temp,r;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
	printf("palindrome");
	else
	printf("not a palindrome");
}


