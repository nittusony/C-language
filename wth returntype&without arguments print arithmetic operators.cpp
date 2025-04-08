#include<stdio.h>
float sum();
int sub();
float mult();
main()
{
	printf("%f",sum());
	printf("%d",sub());
	printf("%f",mult());
}
float sum()
{
	int x;
	float y;
	printf("enter int,float");
	scanf("%d%f",&x,&y);
	return x+y;
}
int sub()
{
	int x,y;
	printf("enter x,y");
	scanf("%d%d",&x,&y);
	return x-y;
}
float mult()
{
	int x;
	float y;
	printf("enter int,float");
	scanf("%d%f",&x,&y);
	return x*y;
}

