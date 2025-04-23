#include<stdio.h>
main()
{
	char st[20],i;
		printf("enter string ");
		scanf("%s",st);
		printf("vowels of a string: ");
	    for(i=0;st[i]!='\0';i++)
	{
		if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
	printf("%c",st[i]);
}
}
