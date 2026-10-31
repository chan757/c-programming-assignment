#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int dan;
    int number;
    int step;

    scanf("%d %d", &a, &b);

    if (a <= b) {
        step = 1;
    } else {
        step = -1;
    }

    for (number = 1; number <= 9; number++) {
        for (dan = a; ; dan += step) {
            printf("%d * %d = %2d", dan, number, dan * number);

            if (dan == b) {
                break;
            }
            printf("   ");
        }
        printf("\n");
    }

    return 0;
}