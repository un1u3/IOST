/* Write a program that creates a one-dimensional array of 5 integers.
Assign value to each element of an array and print them to the console*/

#include <stdio.h>

int main() {
	int arr[5] = {10, 20, 30, 40, 50};

	printf("Array elements are: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n--[Your Name]--");

	return 0;
}
