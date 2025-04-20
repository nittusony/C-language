#include<stdio.h>
#include<stdlib.h>
 main()
{
	int*ptr=0;
	int i,n;
	printf("enter n ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
	printf("memory not allocated");
	}else
{
		printf("memory successfully allocated\n");
		for(i=0;i<n;i++)
		{
			printf("enter elements\n");
			scanf("%d",ptr+i);
		}
		printf("elements are \n");
		for(i=0;i<n;i++)
		{
			printf("%d ",*(ptr+i));
		}
		free(ptr);
}
		}
