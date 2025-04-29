#include <stdio.h>
#define factorial1(n) factorial(n)
int factorial (int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
 int main()
 {
 	int x;
 	printf("enter number:");
 	scanf("%d",&x);
 	int result=factorial1(x);
 	printf("factorial is %d:%d",x,result);
 } 


 
  
      
