#include<stdio.h>
main()
{
	char st[20],i;
		printf("enter string ");
 scanf("%s",st);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
		{
		st[i]=st[i+1];
	}
}
	printf("%s",st);
}
