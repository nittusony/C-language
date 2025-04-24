#include<stdio.h>
#include<string.h>
main()
{
	char st[30];
	int i;
	printf("enter string");
	//scanf("%s",st);
	gets(st);
	for(i=0;st[i]!=0;i++)
	{
		if(st[i]>='A'&&st[i]<='Z')//toggling the characters
		st[i]=st[i]+32;
		else if(st[i]>='a'&&st[i]<='z')
		st[i]=st[i]-32;
	}
	printf("%s",st);
}
