#include<stdio.h>
main()
{
	int a=4,b=5;
	printf("before swaping a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping a=%d b=%d\n",a,b);
}
