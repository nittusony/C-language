#include<stdio.h>
void palindrome(int);
main()
{
	int a[100],i,n;
	printf("enter no of elements");
	scanf("%d",&n);
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
	printf("palindrome\n");
else
	printf("not a palindrome\n");
}

   
