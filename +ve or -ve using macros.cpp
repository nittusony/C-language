#include<stdio.h>
#define positive(n) n>=0?printf("positive number"):printf("negative number")
main()
{
	int x;
	printf("enter numbers");
	scanf("%d",&x);
	positive(x);
}
