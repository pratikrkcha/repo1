#include "stdio.h"

// Function prototype
void divisibility(int);

void main()
{
    int n;  // User input
    printf("\nEnter a number - ");  
    scanf("%d", &n);  // Read input
    
    // Check divisibility for input and sample numbers
    divisibility(n);
    divisibility(154368);
    divisibility(621594);
    divisibility(123456);
}

// Check if number is divisible by 9
void divisibility(int n)
{
    int sum = 0;  // Sum of digits
    int r;  // Current digit

    printf("\n");
    // Process each digit
    while(n != 0)
    {
        r = n % 10;  // Get last digit
        n = n / 10;  // Remove last digit
        printf("%d ", r);  // Print digit
        sum += r;  // Add to sum
    }
    
    // Check divisibility by 9
    if((sum % 9) == 0)
        printf("\nThe number is divisible by 9\n");
    else
        printf("\nThe number is not divisible by 9\n");
}

