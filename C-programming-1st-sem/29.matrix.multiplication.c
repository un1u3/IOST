//Write a program to multiply two 3*3 matrix.
#include <stdio.h>

void multiply(int A[3][3], int B[3][3], int result[3][3]);

int main() {
	int A[3][3], B[3][3], result[3][3];

	printf("Enter elements for matrix A (3x3):\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	printf("Enter elements for matrix B (3x3):\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	multiply(A, B, result);

	printf("Resultant matrix after multiplication:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	printf("\n--[Your Name]--\n");

	return 0;
}

void multiply(int A[3][3], int B[3][3], int result[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			result[i][j] = 0;
			for (int k = 0; k < 3; k++) {
				result[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}
