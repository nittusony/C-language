#include<stdio.h>
union student{
	char n[20];
	int r;
	float m;
}var;
main()
{
	printf("enter student name:");
	scanf("%s",var.n);
	printf("%s\n",var.n);
	printf("enter rollno:");
	scanf("%d",&var.r);
	printf("%d\n",var.r);
	printf("enter marks:");
	scanf("%f",&var.m);
	printf("%f",var.m);
}
