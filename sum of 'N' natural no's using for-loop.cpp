#include<stdio.h>
main()
{
 int n,sum=0; 
 printf("enter a integer");
 scanf("%d",&n);
for(int i=1;i<=n;i++)
{
sum+=i;	
}
printf("sum of first %d natural numbers is: %d\n",n,sum);
}
