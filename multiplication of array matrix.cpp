#include<stdio.h>
main()
{
int a[50][50],b[50][50],c[50][50],j,i,k,R1,C1,R2,C2;
printf("enter R1,C1");
scanf("%d%d",&R1,&C1);
printf("enter matrix1\n");
for(i=0;i<R1;i++)
for(j=0;j<C1;j++)
scanf("%d",&a[i][j]);
printf("enter R2,C2");
scanf("%d%d",&R2,&C2);
printf("enter matrix2\n");
for(i=0;i<R2;i++)
for(j=0;j<C2;j++)
scanf("%d",&b[i][j]);
printf("the matrix %d*%d is\n",R1,C1,R2,C2); 
if(C1==R2)
{
printf("matrix multiplication possible\n");
for(i=0;i<R1;i++)
{
	for(j=0;j<C2;j++)
	{
		c[i][j]=0;
		for(k=0;k<C1;k++)
		{
		c[i][j]+=a[i][k]*b[k][j];
	}
		printf("%d\t",c[i][j]);
	}
	printf("\n");
	}
}
else
{
printf("not possible");
}
}

