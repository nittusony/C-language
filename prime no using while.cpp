#include<stdio.h>
main()
{
	int n,i=1,count=0;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("prime number");
	else
	printf("not a prime number");
	
}

