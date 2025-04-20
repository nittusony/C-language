#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr=NULL;
	int n,i,j,temp;
	printf("enter integers ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	printf("memory not allocated");
	else
	{
		printf("memory successfully allocated\n");
	}
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&ptr[i]);
}
 for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
{
	if(ptr[i]<ptr[j])
	{
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
	}
}
}
for(i=0;i<n;i++)
{
printf("%d ",ptr[i]);
}
free(ptr);
return 0;
}
 

