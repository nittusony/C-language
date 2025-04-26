#include<stdio.h>
int get_sum(int sum,int i,int b)
{
	if(i>b)
	return sum;
	return i+get_sum(sum,i+1,b);
}
main()
{
	int a=13;
	int b=24;
	int sum=get_sum(0,a,b);
	printf("%d",sum);
}
