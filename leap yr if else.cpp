#include<stdio.h>
 main()
{
int i;
printf("enter year");
scanf("%d",&i);
if(i%400==0)
printf("%d is leap year",i);
else if(i%4==0 && i%100!=0) 
printf("%d is leap year",i);
else
printf("%d is not a leap year",i);
}


