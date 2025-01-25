
// palindrome checker

#include <stdio.h>

int main()
{
    char str[100], reversed[100];
    int i = 0, j = 0, length = 0, isPalindrome = 1;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string manually
    while (str[length] != '\0')
    {
        length++;
    }

    // Reverse the string manually
    for (i = length - 1; i >= 0; i--)
    {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0'; // Null-terminate the reversed string

    // Compare original and reversed strings
    for (i = 0; i < length; i++)
    {
        if (str[i] != reversed[i])
        {
            isPalindrome = 0;
            break;
        }
    }

    // Output the result
    if (!isPalindrome)
    {
        printf("The string is not a palindrome.\n");
    }
    else
    {
        printf("The string is a palindrome.\n");
    }
    return 0;
}