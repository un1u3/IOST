// qno 2 ls3

#include <stdio.h>
// defining  macros
#define PI 3.1415
#define mult(a, b) a *b
#define sum(a, b) a + b
#define sub(a, b) a - b

int main()
{
    float a = 8, b = 4;

    printf("The product is: %.4f", (PI * mult(a, b)));
    printf("\nThe sum is: %.4f", (PI * sum(a, b)));
    printf("\nThe difference is: %.4f", (PI * sub(a, b)));
    printf("\n-By Arun Khanal");
    return 0;
}
