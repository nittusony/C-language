#include<stdio.h>
main()
{
	int a=1;
	int b=2;
	const int* ptr;
	ptr=&b;
	*ptr=300;
	printf("value of ptr is :%d",*ptr);
}
