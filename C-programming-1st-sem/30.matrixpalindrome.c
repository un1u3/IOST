/*Write a program to read a stringand
check for palindrome without using string related function.*/
#include <stdio.h>

int check(char str[]);

int main() {
	char str[100];

	printf("Enter a string: ");
	scanf("%[^\n]s", str);

	if (check(str)) {
		printf("It is a palindrome.\n");
	} else {
		printf("Itis not a palindrome.\n");
	}

	printf("\n--[Your Name]--\n");

	return 0;
}

int check(char str[]) {
	int start = 0, end = 0;

	while (str[end] != '\0') {
		end++;
	}
	end--;

	while (start < end) {
		if (str[start] != str[end]) {
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}
