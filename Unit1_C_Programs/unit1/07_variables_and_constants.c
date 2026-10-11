/* Program 7: Demonstrate the use of variables and constants */
#include <stdio.h>

#define COLLEGE "MIT ADT"     /* symbolic constant */

int main()
{
    const float PI = 3.14159; /* const keyword */
    int age = 20;             /* variables with initialization */
    float marks = 89.5;
    char grade = 'A';

    printf("College : %s\n", COLLEGE);
    printf("PI      : %.5f\n", PI);
    printf("Age     : %d\n", age);
    printf("Marks   : %.1f\n", marks);
    printf("Grade   : %c\n", grade);

    /* Variable values can change; constants cannot */
    age = age + 1;
    printf("Age next year : %d\n", age);

    return 0;
}
