#include <stdio.h>

int main(void)
{
    int multiplier;
    int number;

    for (number = 1; number <= 9; number++) {
        for (multiplier = 2; multiplier <= 4; multiplier++) {
            printf("%d * %d = %2d", multiplier, number,
                   multiplier * number);
            if (multiplier < 4) {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}