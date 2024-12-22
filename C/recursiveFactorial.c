// A program to calculate a factorial of a number

#include <stdio.h>
int fact(int a); // function definition

int main()
{
    int b;
    printf("enter a number:");
    scanf("%d", &b);
    int result;
    result = fact(b); // function calling
    printf("factorial of %d is %d", b, result);
    return 0;
}

// called function
int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    return a * fact(a - 1);
}