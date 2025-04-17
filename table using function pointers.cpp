#include<stdio.h>
void table(int);
void (*ptr)(int);
main()
{
	int n,i,t;
	printf("enter n ");
	scanf("%d",&n);
	ptr=&table;
	printf("%d\n",ptr);
	table(n);
}
void table(int n)
{
	int i,t;
	for(i=1;i<=10;i++)
	{
		t=n*i;
		printf("%d*%d=%d\n",n,i,t);
	}
}
