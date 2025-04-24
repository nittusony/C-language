#include<stdio.h>
struct student{
	char n[20];
	int r;
	float m;
}st;
void grade(char st[],int a,float b)
{
	if(b>500)
	printf("%s with rollno %d got grade A\n",st,a);
	else
	printf("%s with rollno %d got grade F",st,a);
}
main()
{
	struct student st={"ravi",30,570};
	grade(st.n,st.r,st.m);
	grade("ram",23,480);
}
