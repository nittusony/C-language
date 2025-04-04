#include<stdio.h>
	void even_odd(int);
	main()
	{
		int a;
		printf("enter integer");
		scanf("%d",&a);
		even_odd(a);
	}
	void even_odd(int a)
{
	if(a%2==0)
	printf("%d is even",a);
	else
	printf("%d is odd",a);

}
