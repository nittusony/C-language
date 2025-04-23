#include<stdio.h>
#include<string.h>
main()
{
	char st1[20]="welcome",st2[30];
	int l=strlen(st1);
	strcpy(st2,st1);
	if(strcmp(st1,st2))
	printf("not same");
	else
		printf("both strings are same\n");
	printf("%s\n",strupr(st1));
	printf("%s",strlwr(st1));
}
