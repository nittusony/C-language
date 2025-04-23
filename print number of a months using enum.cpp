#include<stdio.h>
main()
{
	enum months{jan=1,feb,mar,apr,may,jun,july,aug,sep,oct,nov,dec};
	int x=feb,i;
	printf("%d\n",x);
	for(i=jan;i<=dec;i++)
	printf("%d\t",i);
}
