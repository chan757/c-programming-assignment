#include <stdio.h>

int main(void)
{
    int multiplier;
    int number;

    for (multiplier = 2; multiplier <= 4; multiplier++) {
        for (number = 1; number <= 5; number++) {
            printf("%d * %d = %3d", multiplier, number,
                   multiplier * number);
            if (number < 5) {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}