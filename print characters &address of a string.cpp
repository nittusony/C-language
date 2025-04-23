#include<stdio.h>
main()
{
	char st[20]="welcome";
	char *ptr=st;//char *ptr=&st[0]; 
	while(*ptr!='\0')
	{
		printf("%c %u\n",*ptr,ptr);
		ptr++;
	}
}
