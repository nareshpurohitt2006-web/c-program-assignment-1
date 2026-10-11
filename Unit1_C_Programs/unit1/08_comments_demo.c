/*
 * Program 8: Single-line and multi-line comments
 * This is a multi-line comment.
 * The compiler ignores everything inside it.
 */
#include <stdio.h>

int main()
{
    int a = 10, b = 20, sum;   // single-line comment: declare variables

    // Calculate sum
    sum = a + b;

    /* Display the result
       (multi-line comment inside code) */
    printf("Sum = %d\n", sum);

    return 0;
}
