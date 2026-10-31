#include <stdio.h>

int main(void)
{
    int number;

    for (number = 1; number <= 20; number += 2) {
        printf("%d\n", number);
    }

    return 0;
}