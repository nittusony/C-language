#include<stdio.h>
struct student{
	char n[20];
	int r;
	float m;
}st;
void grade(struct student var)
{
	if(var.m>500)
	printf("%s with rollno %d got grade A\n",var.n,var.r);
else
printf("%s with rollno %d got grade F",var.n,var.r);
}
main()
{
	struct student st={"ravi",30,560};
	grade(st);
struct student st2={"ram",23,439};
grade (st2);
}
