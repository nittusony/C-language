#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr=NULL;
	int n,new_size,i,j,temp;
	printf("enter integers ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
	printf("memory not allocated");
}
	else
	{
		printf("memory successfully allocated");
	}
	printf("enter elements\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&ptr[i]);
}
printf("enter new_size value\n ");
scanf("%d",&new_size);
int*new_ptr=(int*)realloc(ptr,new_size*sizeof(int));
if(new_ptr==NULL)
{
printf("memory not allocated");
}
else
{
	ptr=new_ptr;
	printf("memory sucessfully allocated\n");
}
if(new_size>n)
{
	printf("enter elements\n",new_size-n);
	for(i=n;i=new_size;i++)
{
scanf("%d",&ptr[i]);
}
}
n=new_size;
 for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
{
	if(ptr[i]>ptr[j])
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
 

