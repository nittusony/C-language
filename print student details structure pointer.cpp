#include<stdio.h>
struct student{
	char n[20];
	unsigned int r;
	 float m;
}var={"ravi",10,500.3};
struct employ{
	char e[20];
	int id;
	float salary;
}emp={"ram",12,10000.8};	
main()
{
	struct student *ptr;
	struct employ *ptr1;
	ptr=&var;
	ptr1=&emp;
	printf("student details: %s %d %f\n",ptr->n,ptr->r,ptr->m);
	printf("employ details :%s %d %f\n",(*ptr1).e,(*ptr1).id,(*ptr1).salary);
	(*ptr).r=20;
	(*ptr).m=502.3;
	printf("updated student details: %s %d %f",ptr->n,ptr->r,ptr->m); 
}
