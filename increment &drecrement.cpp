#include<stdio.h>
main()
{
	int x=10,y;
	y=x++;
	printf("%d%d\n",x,y);
	y=--x;
	printf("%d%d\n",x,y);
	y=++x;
	printf("%d%d\n",x,y);
}
