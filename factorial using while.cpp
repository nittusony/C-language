#include<stdio.h>
main()
{
	int n,fact=1,i=1;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		{
			printf("%d\n",fact);
			i++;
		}
	}
}
