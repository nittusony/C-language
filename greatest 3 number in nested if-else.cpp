#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&b>c)
	printf("%d is greatest number",a);
		else
		{
		if(b>c)
		printf("%d is greatest number",b);
		else
		printf("%d is greatest number",c);
	}
}
