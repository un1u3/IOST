// #include <stdio.h>
// #include <conio.h> // Required for getch() and getche()

// int main()
// {
//     char ch1, ch2, ch3;
//     char str[100];

//     printf("Demonstrating getch(), getche(), and getchar():\n");

//     // getch()
//     printf("Press a key (getch, no echo): ");
//     ch1 = getch();
//     printf("\nYou pressed: %c (getch)\n", ch1);

//     // getche()
//     printf("Press a key (getche, echo): ");
//     ch2 = getche();
//     printf("\nYou pressed: %c (getche)\n", ch2);

//     // getchar()
//     printf("Press a key (getchar, echo): ");
//     ch3 = getchar();
//     printf("You pressed: %c (getchar)\n\n", ch3);

//     printf("Demonstrating scanf() vs. gets():\n");

//     // scanf()
//     printf("Enter a word (scanf): ");
//     scanf("%s", str); // Only reads up to the first space
//     printf("You entered: %s (scanf)\n", str);

//     // Clear the input buffer before using gets()
//     while (getchar() != '\n')
//         ;

//     // gets()
//     printf("Enter a sentence (gets): ");
//     gets(str); // Reads the entire line
//     printf("You entered: %s (gets)\n\n", str);

//     printf("Demonstrating printf() vs. puts():\n");

//     // printf()
//     printf("Using printf: Hello, World!\n");

//     // puts()
//     puts("Using puts: Hello, World!");

//     return 0;
// }
