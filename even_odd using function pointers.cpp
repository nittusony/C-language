#include<stdio.h>
void even_odd(int);
void (*ptr)(int);
main()
{
	int a;
	printf("enter integer ");
	scanf("%d",&a);
	ptr=&even_odd;
	printf("%d\n",ptr);
	even_odd(a);
}
void even_odd(int a)
{
	if(a%2==0)
	printf("even",a);
	else
	printf("odd",a);
}
