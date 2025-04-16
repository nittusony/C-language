#include<stdio.h>
void swap(int,int);
main()
{
	int a=5,b=4;
	printf("before the swaping a=%d b=%d\n",a,b);
	swap(a,b);
	printf("a=%d b=%d\n",a,b);
}
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	printf("after the swaping a=%d b=%d\n",a,b);
}
