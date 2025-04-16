#include<stdio.h>
main()
{
	int i;
	int a[5]={10,3,4,5,6};
	for(i=0;i<5;i++)
	{
		printf("%d %u\n",a[i],&a[i]);
	}
}
