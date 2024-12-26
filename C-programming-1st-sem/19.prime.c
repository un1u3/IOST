/*	Write a program using for loop with a break statement to find the first prime number between 1 and 100
 and print it.*/
#include<stdio.h>
#include<conio.h>
int main() {
	int i, j, Prime;

	for(i = 2; i <= 100; i++) {
		Prime = 1;

		for(j = 2; j <= i / 2; j++) {
			if(i % j == 0) {
				Prime = 0;
				break;
			}
		}

		if(Prime) {
			printf("%d is the first prime number\n", i);
			break;
		}
	}

	printf("--[Your Name]--\n");
	getch();
	return 0;
}
