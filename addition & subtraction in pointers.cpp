#include<stdio.h>
main() 
{
	char x=10,y=30,z=40;
	char*ptr=&x;
	printf("%u %d\n",ptr,*ptr);
	ptr=ptr+2;
	printf("%u %d\n",ptr,*ptr);
	ptr=ptr-1;
	printf("%u %d\n",ptr,*ptr);
}
