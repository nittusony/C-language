#include<stdio.h>
main()
{
	int n=43,i=0,a[32],j;
	while(n>0)
	{
		a[i]=n%2;
		n/=2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	printf("%d",a[j]);
}
