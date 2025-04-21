#include<stdio.h>
main()
{
	char st[20];
	int i;
	char smallest;
	printf("enter string ");
	scanf("%s",st);
	smallest=st[0];
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]<smallest)
		smallest=st[i];
	}
	printf("%c",smallest);
	}
	
