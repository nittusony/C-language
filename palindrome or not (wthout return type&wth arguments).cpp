#include<stdio.h>
void palindrome(int n)
 {
    int temp = n, sum = 0, r;
    while (temp != 0)
	 {
        r = temp % 10; 
        sum = sum * 10 + r; 
        temp = temp / 10; 
    }
    if (n == sum) 
	{
        printf("%d is a palindrome\n", n);
    } else {
        printf("%d is not a palindrome\n", n);
    }
}
int main() 
{
    int a[100], i, n;
    printf("Enter a number: ");
    scanf("%d", &n); 
    palindrome(n);
    return 0;
}

