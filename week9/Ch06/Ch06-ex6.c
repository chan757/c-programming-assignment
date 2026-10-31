#include <stdio.h>

int main(void)
{
    int limit;
    int number;

    scanf("%d", &limit);

    for (number = 2; number <= limit; number += 2) {
        printf("%d\n", number);
    }

    return 0;
}