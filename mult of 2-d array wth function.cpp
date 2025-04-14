#include<stdio.h>
#define R1 2
#define C1 3
#define R2 3
#define C2 3
void mult(int m1[R1][C1],int m2[R2][C2],int result[R1][C2]);
int main()
{
	int m1[R1][C1],m2[R2][C2],result[R1][C2];
	int i,j,k;
	printf("enter matrix1\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
{
	scanf("%d",&m1[i][j]);
}
}
printf("enter matrix2\n");
for(i=0;i<R2;i++)
{
	for(j=0;j<C2;j++)
{
	scanf("%d",&m2[i][j]);
}
}
C1==R2;
{
	printf("matrix mult is possible\n");
}
mult(m1,m2,result);
printf("result of %d*%d\n",R1,C2);
for(i=0;i<R1;i++)
{
	for(j=0;j<C2;j++)
	{
	printf("%d\t",result[i][j]);
}
printf("\n");
}
return 0;
}
void mult(int m1[R1][C1],int m2[R2][C2],int result[R1][C2])
{
	int i,j,k;
	for(i=0;i<R1;i++)
	{
for(j=0;j<C2;j++);
{
result[i][j]=0;
for(k=0;k<C1;k++)
{
result [i][j]+=m1[i][k]*m2[k][j];
}
}
}
}

