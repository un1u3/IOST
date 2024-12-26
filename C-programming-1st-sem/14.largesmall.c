#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    if (largest % 2 == 0) {
        printf("Largest number is: %d, and it is even\n", largest);
    } else {
        printf("Largest number is: %d, and it is odd\n", largest);
    }

    if (smallest % 2 == 0) {
        printf("Smallest number is: %d, and it is even\n", smallest);
    } else {
        printf("Smallest number is: %d, and it is odd\n", smallest);
    }
    printf("--[Your Name]--");

    return 0;
}
