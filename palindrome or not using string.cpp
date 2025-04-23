#include<stdio.h>
#include<string.h>
main()
{
	char st[20];
	int i,l,flag=0;
	printf("enter string ");
	scanf("%s",st);
	l=strlen(st);
	for(i=0;i<l/2;i++)
	{
		if(st[i]!=st[l-i-1])
		{
		flag=1;
		break;
	}
}
if(flag==1)
	printf("not a palindrome");
 else
	printf("palindrome");
}




