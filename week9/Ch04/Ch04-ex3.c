#include <stdio.h>

int main(void)
{
    int number;

    scanf("%d", &number);

    if (number > 0) {
        printf("%d\n", number);
        printf("Positive number\n");
    }

    return 0;
}