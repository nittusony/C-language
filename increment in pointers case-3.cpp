#include<stdio.h>
main()
{
	int x=10,y=20;
	int *ptr=&x;
	int z=++*ptr;
printf("%d %u %d",z,ptr,*ptr);
//printf("%d %d\n",&x,&y);	
}
