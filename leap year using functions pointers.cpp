#include<stdio.h>
void leapyear(int);
void (*ptr)(int);
main()
{
	int i;
	printf("enter year ");
	scanf("%d",&i);
	ptr=&leapyear;
	printf("%d\n",ptr);
	leapyear(i);
}
void leapyear(int i)
{
	if(i==400)
	printf("leapyear",i);
	else if(i%4==0&&i%100!=0)
	printf("leapyear",i);
	else
	printf("not a leapyear",i);
}

