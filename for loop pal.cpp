#include<stdio.h>
main()
{
	int n=121,i,sum=0;
	int temp=n;
	for(i=n%10;sum=sum*10+i;n/=10)
	if(n==sum)
	printf("palindrome");
	else
	printf("not a palindrome");
}
