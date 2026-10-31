#include <stdio.h>

int main(void)
{
    int start;
    int sum = 0;
    int i;

    scanf("%d", &start);

    for (i = start; i <= 100; i++) {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}