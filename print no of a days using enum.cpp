#include<stdio.h>
main()
{
	enum months{mon=1,tue,wed,thur,fri,sat,sun};
	int x=mon,i;
	printf("%d\n",x);
	for(i=mon;i<=sun;i++)
	printf("%d\t",i);
}
