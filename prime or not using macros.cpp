#include<stdio.h>
#define  prime_not1(n)  prime_not(n)
void prime_not(int n){
	int count=0,i;
for(i=1;i<=n;i++)
{
  (n%i==0)?count++:0;
}
  	(count==2)?printf("prime"):printf("not prime");
}
  main()
{
	int x,i;
	printf("enter number:");
	scanf("%d",&x);
	prime_not(x);
	//return 0;
}

