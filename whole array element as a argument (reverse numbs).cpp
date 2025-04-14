#include<stdio.h>
void fun(int a[]);
 int n;
 main()
{
	int a[100],i;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter integer %d \n",i+1);
		scanf("%d",&a[i]); 
	}
	fun (a);
}
void fun(int a[])
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
