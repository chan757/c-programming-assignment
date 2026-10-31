#include <stdio.h>

int main(void)
{
    int number;
    int small = 0;
    int large = 0;

    while (scanf("%d", &number) == 1) {
        if (number < 50) {
            small++;
        } else {
            large++;
        }

        if (number >= 100) {
            break;
        }
    }

    printf("%d\n", small);
    printf("%d\n", large);

    return 0;
}