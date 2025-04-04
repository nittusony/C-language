#include<stdio.h>
main()
{
	int a,b,n;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	printf("select 1 for add\n");
    printf("select 2 for sub\n");
	printf("select 3 for quotient\n");
	printf("select 4 for mult\n");
	printf("select 5 for remainder\n");
	printf("enter choice");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("%d\n",a+b);
			break;
				case 2:
			printf("%d\n",a-b);
			break;
				case 3:
			printf("%d\n",a/b);
			break;
				case 4:
			printf("%d\n",a*b);
			break;
				case 5:
			printf("%d\n",a%b);
			break;
			default:
			printf("wromg choice");
	}

}
