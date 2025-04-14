#include<stdio.h>
int smallestnumber(int arr[],int size)
{
	int smallest=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}
return smallest;
}
int main()
{
	int arr[100],n;
	printf("enter elements");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int smallest=smallestnumber(arr,n);
	printf("smallest array is %d",smallest);
	return 0;
}


