#include<stdio.h>
main()
{
	char n[20]= "sony nittu";
	FILE *ptr=fopen("C:/Users/sony/Documents/nano.txt","w");
fprintf(ptr,"%s",n);
fclose(ptr);
}

