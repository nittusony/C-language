#include<stdio.h>
void fun(int a[]);
int n;
main()
{
	int a[100],i;
	printf("enter no of elememts");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	fun(a);
}
void fun(int a[])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
