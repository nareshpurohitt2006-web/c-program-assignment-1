/* Program 6: Read a character and display it using putchar() */
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character : ");
    ch = getchar();

    printf("You entered       : ");
    putchar(ch);
    putchar('\n');

    return 0;
}
