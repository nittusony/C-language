#include<stdio.h>
int sum(int,int);
float sub(int,float);
int(*ptr)(int,int);
float(*ptr1)(int,float);
main()
{
	int x=5,y=10;
	float z=3.5;
	ptr=&sum;
	ptr1=&sub;
	printf("%d\n",ptr(x,y));
	printf("%f\n",ptr1(x,z));
}
int sum(int a,int b)
{
	return a+b;
}
float sub(int a,float b)
{
	return a-b;
}
