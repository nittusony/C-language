#include <stdio.h>
#define greatest(a,b) a>b? printf("%d is greatest",a):printf("%d is greatest",b)
main()
{
	int x,y;
	printf("enter numbers");
	scanf("%d %d",&x,&y);
	greatest(x,y);
}
