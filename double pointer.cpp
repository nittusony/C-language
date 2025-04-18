#include<stdio.h>
main()
{
	int x=10;
	int *p=&x;
	int **p1=&p;
	printf("%u %u %u %u %u",p,p1,*p,*p1,**p1);
}

