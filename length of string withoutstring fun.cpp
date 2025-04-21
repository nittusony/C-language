#include<stdio.h>
main()
{
	char st[20];
	int i,l=0;
	printf("enter string ");
	scanf("%s",st);//gets(st); for read the space.
	//for(i=0;st[i]!='\0';i++)
//	l++;
//	printf("%d",l);
for(i=0;st[i]!='\0';i++);
printf("%d",i);
}

