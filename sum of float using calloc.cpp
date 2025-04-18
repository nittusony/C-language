#include<stdio.h>
#include<stdlib.h>
 main()
{
	float*ptr=NULL,sum=0;
	int i,n;
	printf("enter n ");
	scanf("%d",&n);
	ptr=(float*)calloc(n,sizeof (float));
	if(ptr==NULL)
	{
	printf("memory not allocated");
	}else
{
		printf("memory successfully allocated\n");
		for(i=0;i<n;i++)
		{
			printf("enter elements ",i+1);
			scanf("%f",ptr+i);
			sum+=*(ptr+i);
		}
		printf("%f",sum);
	free(ptr);
}
}
