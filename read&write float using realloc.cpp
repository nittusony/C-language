#include<stdio.h>
#include<stdlib.h>
 main()
{
	float*ptr=NULL;
	int i,n;
	printf("enter n ");
	scanf("%d",&n);
	ptr=(float*)calloc(n, sizeof(float));
	if(ptr==NULL)
	{
	printf("memory not allocated");
	}else
{
		printf("memory successfully allocated\n");
		for(i=0;i<n;i++)
		{
			printf("enter elements ");
			scanf("%f",ptr+i);
		}
		printf("elements are\n");
		for(i=0;i<n;i++)
		{
			printf("%f\n",*(ptr+i));
		}
		printf("enter new size value\n");
		scanf("%d",&n);
		float* new_ptr=(float*)realloc(ptr,n*sizeof(float));
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
				scanf("%f",new_ptr+i);
				}
		for(i=0;i<n;i++)
		{
			printf("%f ",*(new_ptr+i));
		}
	free(new_ptr);
}
}
}

