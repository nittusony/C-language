#include<stdio.h>
#define SIZE 5
main()
{
	int a[SIZE],i,temp;
	printf("enter %d intergers",SIZE);
	for(i=0;i<SIZE;i++)
scanf("%d",&a[i]);
for(i=0;i<SIZE/2;i++)
{
	temp=a[i];
	a[i]=a[SIZE-i-1];
	a[SIZE-i-1]=temp;
}
for(i=0;i<SIZE;i++)
printf("%d\t",a[i]);
	}

