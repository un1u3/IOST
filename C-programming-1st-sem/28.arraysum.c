/*Write a program that defines a function that takes an array of integers as a parameter. 
The function should print the sum of the elements in the array to the console. 
Call the function with an array of your choice*/

#include <stdio.h>

int sum(int arr[], int size);

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	sum(arr, size);

	printf("\n--[Your Name]--");

	return 0;
}

int sum(int arr[], int size) {
	int cal = 0;
	for (int i = 0; i < size; i++) {
		cal= cal+arr[i];
	}
	printf("Sum of elements: %d\n", cal);
}
