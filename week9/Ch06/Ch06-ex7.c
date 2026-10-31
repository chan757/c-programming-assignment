#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;
    int i;

    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}