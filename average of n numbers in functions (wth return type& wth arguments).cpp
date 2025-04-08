#include<stdio.h>
float average(int a, int b)
 {
    return (float)(a + b) / 2;
}
 main()
 {
    int a, b;             
    float result;          
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b); 
	result = average(a,b);
    printf("The average is: %.2f\n", result);
}

