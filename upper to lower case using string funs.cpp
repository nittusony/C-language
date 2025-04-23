#include<stdio.h>
#include<string.h>
main()
{
	char st[20];
	printf("enter string ");
	scanf("%s",st);
	strlwr(st);
	printf("%s",st);
}
