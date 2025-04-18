#include<stdio.h>
#include<stdlib.h>
 main()
{
	float*ptr=0;
	int i,n;
	printf("enter n ");
	scanf("%d",&n);
	ptr=(float*)malloc(n*sizeof(float));
	if(ptr==NULL)
	{
	printf("memory not allocated");
	}else
{
		printf("memory successfully allocated\n");
		for(i=0;i<n;i++)
		{
			printf("enter elements\n");
			scanf("%f",ptr+i);
		}
		printf("elements are \n");
		for(i=0;i<n;i++)
		{
			printf("%f ",*(ptr+i));
		}
		free(ptr);
}
		}
