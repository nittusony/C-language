#include<stdio.h>
main()
{
	int n,i;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=10;++i)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}

