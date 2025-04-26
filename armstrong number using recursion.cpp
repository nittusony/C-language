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
int armstrong(int num,int len)
{
	int sum=0,temp,digit,n;
	temp=n;
	while(temp!=0)
	{
	digit=temp%10;
	sum=sum+pow(digit,len);
	temp/=10;
}
		return n==sum;
	}
 main()
	{
	int n,len;
	printf("enter number:");
	scanf("%d",&n);
	len=order(n);
	if(armstrong(n,len))
	{
	printf("armstrong");
}
	else{
	printf("not armstrong");
	}
}
