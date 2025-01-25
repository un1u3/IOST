// Permu.. combi.. using fact

#include <stdio.h>
int fact(int n);
int permutation(int n, int r);
int combination(int n, int r);

int main()
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    if (n < 0 || r < 0 || r > n)
    {
        printf("Invalid input. Ensure 0 <= r <= n.\n");
        return 1;
    }
    printf("P(%d, %d) = %d\n", n, r, permutation(n, r));
    printf("C(%d, %d) = %d\n", n, r, combination(n, r));
    return 0;
}

int fact(int n)
{
    return (n == 0 || n == 1) ? 1 : n * fact(n - 1);
}

int permutation(int n, int r)
{
    return fact(n) / fact(n - r);
}

int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}