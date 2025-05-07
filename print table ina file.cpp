#include<stdio.h>
main()
{
	int i,n;
	FILE *ptr;
	printf("enter number ");
	scanf("%d",&n);
	ptr=fopen("C:/Users/sony/Documents/hi.txt","a");
	for(i=1;i<=10;i++)
	{
		fprintf(ptr,"%d*%d=%d\n",n,i,n*i);
}
fclose(ptr);
}

