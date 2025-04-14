#include<stdio.h>
main()
{
	auto int x=100;
	{
		auto int x=200;
		printf("%d\t",x);
	}
	printf("%d\t",x);
}
