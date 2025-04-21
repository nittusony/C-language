#include<stdio.h>
#include<string.h>
main()
{
	char st[20];
	int i,l=0,temp;
	printf("enter string ");
	scanf("%s",st);
	//gets(st);
{
	temp=st[i];
		st[i]=st[l-i-1];
		st[l-i-1]=temp;
}
strrev(st);
printf("%s",st);
}
