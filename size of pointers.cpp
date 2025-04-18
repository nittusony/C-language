#include<stdio.h>
main()
{
	int *p;
	char *p1;
	float *p2;
	printf("%d %d %d\n",sizeof(p),sizeof(p1),sizeof(p2));
		printf("%d %d %d",sizeof(*p),sizeof(*p1),sizeof(*p2));

}
