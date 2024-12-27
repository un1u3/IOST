/*Write a program to input two integer numbers
 and display the sum of even numbers between these two input numbers.*/

#include <stdio.h>
#include<conio.h>
int main() {
	int a, b, sum = 0, i;


	printf("Enter two integer number\n");
	scanf("%d%d", &a,&b);

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
}


		for (i = a; i <= b; i++) {
			if (i % 2 == 0) {
				sum += i;
			}
		}


		printf("The sum of even numbers between %d and %d is: %d\n", a, b, sum);
		printf("--[Your Name]--");
		getch();
		return 0;
	}