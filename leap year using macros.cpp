#include<stdio.h>
#define leapyear(n) n%400==0||n%4==0&&n%100!=0?printf("leap yr"):printf("not leap yr")
main()
{
	int x;
	printf("enter year");
	scanf("%d",&x);
	leapyear(x);
}
