#include<stdio.h>
main()
{
	int a=1;
	int b=2;
	int *const ptr=&a;
//	ptr=&a;
//	ptr=&b;
	printf("value of ptr is :%d %u",*ptr=29,ptr);
}
