#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr=0,n,i;
	printf("enter n ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(float));
	if(ptr==NULL)
	printf("memory not allocated\n");
	else
	{
		printf("memory successfully allocated\n");
		for(i=0;i<n;i++)
		{
			printf("enter elements ");
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

