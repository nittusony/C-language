#include<stdio.h>
int main(void)
{
int i=1,n,sum=0;
float avg;
printf("Enter integers");
while(i<=5)
{
printf("%d",n);
scanf("%d",&n);
if(n<0)
{
printf("Enter numbers");
continue;
}
sum+=n;
i++;
}
avg=sum/10;
printf("Sum=%d Avg=%f\n",sum,avg);
return 0;
}


