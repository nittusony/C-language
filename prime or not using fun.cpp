#include<stdio.h>
int prime(int n)
 {
    int i, count = 0;
    for(i = 1; i <= n; i++)
	 {
        if(n % i == 0)
		 {
            count++;
        }
    }
    if(count == 2)
        printf("prime");
     else 
        printf("not a prime number");
    }
int main()
 {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    prime(a);    
    return 0;
}

