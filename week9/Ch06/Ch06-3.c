#include <stdio.h>

int main(void)
{
    int limit;
    int number;
    int sum = 0;

    scanf("%d", &limit);

    for (number = 5; number <= limit; number += 5) {
        sum += number;
    }

    printf("%d\n", sum);

    return 0;
}