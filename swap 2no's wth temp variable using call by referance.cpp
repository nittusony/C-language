#include<stdio.h>
void swap(int*,int*);
main()
{
	int a=5,b=4;
	printf("before swaping a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d b=%d\n",a,b);
}
void swap(int*p,int*q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
	printf("after swaping a=%d b=%d\n",*p,*q);
}

