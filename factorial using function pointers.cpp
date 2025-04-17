#include<stdio.h>
void factorial(int);
void (*ptr)(int);
main()
{
	int n;
		printf("enter integer");
		scanf("%d",&n);
		ptr=&factorial;
		printf("%d\n",ptr);
		factorial(n);
	}
void factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	f*=i;
	printf("%d",f);
}

