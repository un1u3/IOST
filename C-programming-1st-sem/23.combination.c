/*	Define a function named fact() to calculate factorial of a number n and
 then write a program that uses this function fact() to calculate combination and permutation.*/

#include <stdio.h>
int fact(int n);

int main() {
	int n, r;
	printf("Enter the total number of elements (n) and number of selection (r): ");
	scanf("%d %d", &n, &r);

	float permute = fact(n) / fact(n - r);
	float combinate = permute / fact(r);


	printf("The permutation is: %.4f and the combination is: %.4f", permute, combinate);
	printf("\n--[Your Name]--");


	return 0;
}

int fact(int n) {
	if (n < 2) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}
