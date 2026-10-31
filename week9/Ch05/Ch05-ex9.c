#include <stdio.h>

int main(void)
{
    int number;
    int maximum = 1;
    int minimum = 100;

    while (scanf("%d", &number) == 1 && number != 0) {
        if (number >= 1 && number <= 100) {
            if (number > maximum) {
                maximum = number;
            }
            if (number < minimum) {
                minimum = number;
            }
        }
    }

    printf("%d\n", maximum);
    printf("%d\n", minimum);

    return 0;
}