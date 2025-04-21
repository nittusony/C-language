#include<stdio.h>
main()
{
	char st[20];
	int i,j,n,l=0,temp;
	printf("enter string ");
	//scanf("%s",st);
	gets(st);
	for(i=0;st[i]!='\0';i++)
	l++;
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		if(st[i]<st[j])
		{
			temp=st[i];
			st[i]=st[j];
			st[j]=temp;
		}
	}
printf("%s",st);
}

