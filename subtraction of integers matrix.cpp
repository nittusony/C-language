#include<stdio.h>
#define R 2
#define C 3
main()
{
	int a[R][C],b[R][C],c[R][C],i,j;
	printf("enter matrix1\n");//enter integers for rows&columns in matrix1
	for(i=0;i<R;i++)//rows
	for(j=0;j<C;j++)//columns
	scanf("%d",&a[i][j]);
	  printf("enter matrix2\n");//enter integers for rows&columns in matrix2
		for(i=0;i<R;i++)//rows
		for(j=0;j<C;j++)//columns
		scanf("%d",&b[i][j]);
		printf("the matrix %d*%d is\n",R,C);
			for(i=0;i<R;i++)//output matrix it will store in matrixC
			{
				for(j=0;j<C;j++)
				{
	c[i][j]=a[i][j]-b[i][j];//subtract for matrixa & matrixb
	printf("%d\t",c[i][j]);// output of matrixC
		}
printf("\n");//for nxt line
	}
}
