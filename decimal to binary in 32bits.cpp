#include<stdio.h>
main()
{
	int n=43,i=0,j,a[32]={i};
	while(n>0)
	{
		a[i]=n%2;
		n/=2;
		i++;
	}
	for(i=31;i>=0;i--)
	printf("%d",a[i]);
}
