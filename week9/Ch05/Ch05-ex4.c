#include <stdio.h>

int main(void)
{
    int number;
    int current = 1;
    int sum = 0;

    scanf("%d", &number);

    while (current <= number) {
        sum += current;
        current++;
    }

    printf("%d\n", sum);

    return 0;
}