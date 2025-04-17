#include<stdio.h>
void prime(int);
void (*ptr)(int);
main()
{
	int n;
	printf("enter integer");
	scanf("%d",&n);
    ptr=&prime;
    printf("%d\n",ptr);
    prime(n);
}
void prime(int n)
{
	int count=0,i; 
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	count++;
}
if(count==2)
{
	printf("prime number");
}
else
	printf("not a prime number");
}



