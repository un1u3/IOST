
// Online C compiler to run C program online
// sum of 50 natty nums using recursion

#include <stdio.h>
int sumOfNaturalNums(int n);
int main()
{
    int n = 50;
    int sum;
    sum = sumOfNaturalNums(n);
    printf("sum of first %d natural numbers is: %d\n", n, sum);
    printf("-- Your Name --");

    return 0;
}

int sumOfNaturalNums(int n)
{
    if (n == 0)
        return 0; // base condition or breaking condition
    return n + sumOfNaturalNums(n - 1);
}