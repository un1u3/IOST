// Mat mult
#include <stdio.h>

int main()
{
    // Define two 3x3 matrices
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};
    // Initialize the result matrix C to 0
    int C[3][3] = {0};
    // Matrix multiplication: C = A * B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j]; // Accumulate product into C[i][j]
            }
        }
    }
    // Display the result matrix C
    printf("Resultant Matrix C (A * B):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}