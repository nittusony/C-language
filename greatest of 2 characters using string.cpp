#include<stdio.h>
main()
{
	char st[20];
	int i;
	char greatest;
	printf("enter string ");
	scanf("%s",st);
	greatest=st[0];
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]>greatest)
		greatest=st[i];
	}
	printf("%c",greatest);
	}
	
