#include<stdio.h>
struct time{
	unsigned int t:5;
	unsigned int m:6;
	unsigned int s:6;
}T={10,30,40};
main()
{
	printf("%d\n",sizeof(T));
	printf("%u:%u:%u",T.t,T.m,T.s);
}
