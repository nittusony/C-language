#include<stdio.h>
int reversedigits(int n)
 {
    int reversed = 0; 
    int digit;       
    while (n!= 0) 
	{
        digit = n % 10;            
        reversed = reversed * 10 + digit; 
        n /= 10;                  
    }
    return reversed; 
}
int main() {
    int n;
    printf("Enter integers ");
    scanf("%d", &n); 
    int reversed = reversedigits(n); 
    printf("%d\n",reversed); 
    return 0; 
}

