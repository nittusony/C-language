#include<stdio.h>
#define R 2
#define C 3
main()
{
	int a[R][C],b[R][C],c[R][C],i,j;
	printf("enter matrix1\n");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&a[i][j]);
	printf("enter matrix2\n");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&b[i][j]);
	printf("the matrix %d*%d is\n",R,C);
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	}
