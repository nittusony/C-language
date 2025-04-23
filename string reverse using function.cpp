#include<stdio.h>
#include<string.h>
void strreverse(char st[]);
main()
{
	char st[20];
	printf("enter string");
	scanf("%s",st);
	strreverse(st);
}
void strreverse(char st[])
{
int i,temp;
int l=strlen(st);
for(i=0;i<l/2;i++)
{
	temp=st[i];
	st[i]=st[l-i-1];
	st[l-i-1]=temp;
	}	
printf("%s",st);
}
	
