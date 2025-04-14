#include<stdio.h>
char grademarks(int marks)
{
	if(marks>500)
	return'A';
	else if(marks>=400)
	return'B';
	else
	 return'F';
}
int main()
{
int marks;
char grade;
printf("enter marks");
scanf("%d",&marks);
grade=grademarks(marks);
printf("grade %c\n",grade);
return 0;
}
