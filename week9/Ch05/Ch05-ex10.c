#include <stdio.h>

int main(void)
{
    int number;

    while (scanf("%d", &number) == 1 && number != -1) {
        if (number % 3 == 0) {
            printf("%d\n", number / 3);
        }
    }

    return 0;
}