#include <stdio.h>
#include<conio.h>

int main() {

	int temp;

	for(int i=1; i<=5; i++) {

		temp = i;

		printf("%d\t", temp);

		for (int j=5; j<i; j--) {
			temp=temp+j;
			printf("%d\t",temp);

		}

		printf("\n");

	}

	printf("--[Your Name]--");

	getch();
	return 0;

}