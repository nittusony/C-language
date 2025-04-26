#include<stdio.h>
struct student{
	char n[20];
	int r;
	float m;
}st[2];
void grade(struct student st[]);
main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter student details:");
		scanf("%s%d%f",st[i].n,&st[i].r,&st[i].m);
		grade(st);
	}	
}
void grade(struct student st[])
{
	for(int i=0;i<2;i++)
	{
		if(st[i].m>500)
		printf("grade A\n");
		else
		printf("grade B\n");
	}
}
