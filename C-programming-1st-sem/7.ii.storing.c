// Write a program that asks the user to enter 5 integers and store them in an array. Print the elements of the array in the console.

#include <stdio.h>
int main()
{
    int i, a[5];
    printf("Enter 5 integers to store them in an array:\t");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in the array you gave are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
}