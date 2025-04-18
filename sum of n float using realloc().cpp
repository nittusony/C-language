#include<stdio.h>
#include<stdlib.h>
 main()
{
	float*ptr=NULL,sum=0;
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
			sum+=*(ptr+i);
		}
		printf("%f\n",sum);
		printf("enter new size value");
		scanf("%d",&n);
		int* new_ptr=(int*)realloc(ptr,n*sizeof(int));
		if(new_ptr==NULL)
		printf("memory not allocated");
		else
		{
			printf("memory allocated\n");
			for(i=0;i<n;i++)
			{
				printf("enter integer");
				scanf("%d",new_ptr+i);	
				
				}
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",*(new_ptr+i));
		}
	free(ptr);
}
}

