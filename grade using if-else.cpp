#include<stdio.h>
main()
{ 
	int a;
	printf("enter marks");
	scanf("%d",&a);
	if(a>500)
	printf("Grade A",a);
else if (a>400)
	printf("Grade B",a);
  else if(a>300)
	printf("Grade C",a);
 else if (a<300)	
printf("Fail",a);
}
