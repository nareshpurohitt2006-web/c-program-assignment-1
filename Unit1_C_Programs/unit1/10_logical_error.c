/* Program 10: Logical error and its correction */
#include <stdio.h>

int main()
{
    int length = 5, width = 4;
    int wrong_area, correct_area;

    /* Logical error: compiles and runs, but gives the wrong answer */
    wrong_area = length + width;
    printf("Wrong Area   (length + width) = %d\n", wrong_area);

    /* Corrected formula */
    correct_area = length * width;
    printf("Correct Area (length * width) = %d\n", correct_area);

    return 0;
}
