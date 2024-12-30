/*Write a program to read two matrices of order 3*2, 
add them and display the resultant matrix in matrix form*/
#include <stdio.h>

int main() {
	int matrix1[3][2], matrix2[3][2], result[3][2];

	printf("Enter elements of first matrix (3x2):\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &matrix1[i][j]);

	printf("Enter elements of second matrix (3x2):\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &matrix2[i][j]);

	printf("\nResultant Matrix after addition:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	printf("\n--[Your Name]--");

	return 0;
}
