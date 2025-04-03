#include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("%d",fact);
}
