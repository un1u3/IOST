/* Write a program that asks the user to enter 5 integers and store them in an array.
Print the elements of the array in the console.*/
#include<stdio.h>

int main() {
	int a[5],i;
	//for input
	for ( i=0; i<5; i++) {
		printf("Enter number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	//for output
	printf("The numbers entered is: ");
	for ( i=0; i<5; i++) {
		printf(" %d",a[i]);
	}
	printf("\n--[Your Name]-- ");

	return 0;
}