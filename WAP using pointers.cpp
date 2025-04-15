#include<stdio.h>
main()
{
	int x=10;
	float y=3.45;
	char z='A';
	int *ptr=&x;
	float *ptr1=&y;
	char *ptr2=&z;
		printf("%u %d\n",ptr,*ptr);
	printf("%u %f\n",ptr1,*ptr1);
	printf("%u %c\n",ptr2,*ptr2);
}
