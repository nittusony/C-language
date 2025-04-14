#include<stdio.h>
main()
{
	int marks;
	char grade;
	printf("enter marks");
	scanf("%d",&marks);
	grade=(marks>500)?'a':((marks>=400)?'b':'f');
	printf("grade %c \n",grade);
}
