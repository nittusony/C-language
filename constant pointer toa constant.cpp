#include<stdio.h>
main()
{
	int a=1;
	int b=2;
	const int* const ptr=&a;
    *ptr=12;
	ptr=&b;
	printf("value of ptr is :%d %u",*ptr,ptr);
}
