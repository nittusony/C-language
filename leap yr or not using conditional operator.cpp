#include<stdio.h>
int main()
{
	int year;
	printf("enter a year");
	scanf("%d",&year);
	((year%4==0&&100!=0)||(year%400==0))?printf("%d isa leap year\n",year)
	:printf("%d is not a leap year\n",year);
	return 0;
}
