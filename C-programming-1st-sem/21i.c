#include <stdio.h>

#include <conio.h>

int main() {

	for(int i=1; i<=5; i++) {

		for (int j=1; j<=i; j++) {

			printf("%d\t", j);
		}
		printf("\n");

	}

	printf("\n--[Your Name]--");

	getch();

	return 0;

}