#include <stdio.h>

int main(void)
{
    int number;
    int i;

    scanf("%d", &number);

    for (i = 1; i <= 10; i++) {
        printf("%d\n", number * i);
    }

    return 0;
}