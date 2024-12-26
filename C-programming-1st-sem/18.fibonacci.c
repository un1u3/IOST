//⦁	Write a program to display Fibonacci series of last term up to 300.
#include<stdio.h>
int main() {
	int a = 0, b = 1, nextTerm = 0;


	printf("Fibonacci series up to 300:\n");
	printf("%d, %d", a, b);


	nextTerm = a + b;
	while (nextTerm <= 300) {
		printf(", %d", nextTerm);
		a = b;
		b = nextTerm;
		nextTerm = a + b;
	}
	printf("\n");
	printf("\n--[Your Name--");
	return 0;
}
