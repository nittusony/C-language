#include<stdio.h>
struct student{
	char n[20];
	int r;
	float m;
}st1;
main()
{
	struct student st2;
	printf("enter student details:");
	scanf("%s %d %f",st1.n,&st1.r,&st1.m);
	printf("%s %d %f\n",st1.n,st1.r,st1.m);
	printf("enter 2nd student detsils:");
	scanf("%s %d %f",st2.n,&st2.r,&st2.m);
	printf("%s %d %f",st2.n,st2.r,st2.m);
}
