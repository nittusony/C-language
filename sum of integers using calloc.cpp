#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr=0,n,i,sum=0;
	printf("enter n ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof (int));
	if(ptr==NULL)
	printf("memory not allocated");
	else
	{
		printf("memory successfully allocated\n");
		for(i=0;i<n;i++)
		{
			printf("enter elements ");
			scanf("%d",ptr+i);
			sum+=*(ptr+i);
		}
		printf("%d",sum);
	free(ptr);
	}
}
