// fibo

#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0; // Base case: F(0) = 0
    }
    if (n == 1)
    {
        return 1; // Base case: F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 0; // Exit program for invalid input
    }

    printf("Fibonacci series up to %d terms:\n", n);

    // Generate and print the Fibonacci series
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}