#include<stdio.h>
#include<stdlib.h>
 main()
{
	int*ptr=NULL;
	int i,n;
	printf("enter n ");
	scanf("%d",&n);
	ptr=(int*)calloc(n, sizeof(int));
	if(ptr==NULL)
	{
	printf("memory not allocated");
	}else
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
			printf("%d\n",*(ptr+i));
		}
		printf("enter new size value\n");
		scanf("%d",&n);
		int* new_ptr=(int*)realloc(ptr,n*sizeof(int));
		if(new_ptr==NULL)
		{
		printf("memory not allocated");
		free(ptr);
	}
		else
		{
			printf("memory allocated\n");
			for(i=0;i<n;i++)
			{
				printf("enter integer\n");
				scanf("%d",new_ptr+i);
				}
		for(i=0;i<n;i++)
		{
			printf("%d ",*(new_ptr+i));
		}
	free(new_ptr);
}
}
}

