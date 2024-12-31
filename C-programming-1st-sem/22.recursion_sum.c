//	Write a program to calculate sum of first 50 natural numbers using recursive function.
#include <stdio.h>
int sum(int);
int main()
{
	int s,n;
	n=50;
	s=sum(n);
	printf("Sum of first 50 number is %d\n",s);
	printf("--[Your Name]--");
	return 0;
}
int sum(int b) {
	if (b==0) {
		return 0;
	}
	else {
		return b+sum(b-1);
	}
}