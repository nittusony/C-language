#include<stdio.h>
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("%d isa prime number\n",n);
	else
	printf("%d is not a prime number\n",n);
}
main()
{
	int a[100],i,n;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter intergers %d",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		prime(a[i]);
	}
	}

