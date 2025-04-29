#include<stdio.h>
#define even_odd(n) n%2==0?printf("even"):printf("odd")
main()
{
	int x;
	printf("enter numbers :");
	scanf("%d",&x);
	even_odd(x);
}
