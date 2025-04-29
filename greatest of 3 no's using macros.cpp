#include<stdio.h>
#define greatest(a,b,c) a>b?(a>c?printf("%d is greatest",a):printf("%d is greatest",c)):(b>c?printf("%d is grestest",b):printf("%d is greatest",c))
main()
{
	int x,y,z;
	printf("enter numbers");
	scanf("%d %d %d",&x,&y,&z);
	greatest(x,y,z);
}
