#include<stdio.h>
main()
{
	int x=5;
	float y=3.45;
	void *ptr=&x;
	printf("%d %u\n",(*(int*)ptr),ptr);
	ptr=&y;
	printf("%f %u\n",(*(float*)ptr),ptr);
}
