#include<stdio.h>
main()
{
	int i;
	FILE *ptr;
	ptr=fopen("C:/Users/sony/Documents/nano.txt","a");
	for(i=65;i<=90;i++)
	{
		fprintf(ptr,"%c\t",i);
}
fclose(ptr);
}

