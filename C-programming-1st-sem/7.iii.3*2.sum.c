// 3*2 addition
#include <stdio.h>

int main()
{
    int a[3][2], b[3][2], sum[3][2];
    printf("Enter elements of first 3x2 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second 3x2 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    printf("Resultant matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}