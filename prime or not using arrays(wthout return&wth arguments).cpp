#include<stdio.h>
void prime(int);
main()
{
	int a[100],i,n;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter integers %d ",i+1);
		scanf("%d",&a[i]);
		prime(a[i]);
	}
}
	void prime(int n)
	{
		int count=0,i;
		for(i=1;i<=n;i++)
		{
		if(n%i==0)
		count++;
	}
	if(count==2)
		printf("primenumber \n");
		else
		printf("not a primenumber\n");
	}

