#include<stdio.h>
int factorial(int);
main()
{
	int a[5],i;//declare seprate vaiables
	for(i=0;i<5;i++)
	{
	printf("enter integers");
	scanf("%d",&a[i]);
	factorial(a[i]);
}
}
int factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
f*=i;
return f; 
}

