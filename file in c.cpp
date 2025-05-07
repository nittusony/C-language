#include<stdio.h>
main()
{
	FILE *ptr=fopen("C:/Users/sony/Documents/hi.txt","w");
	if(ptr==NULL)
	printf("file not created");
    else
	printf("file created");
	fclose(ptr);
}
