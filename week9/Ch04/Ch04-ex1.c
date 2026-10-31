#include <stdio.h>

int main(void)
{
    int number;

    scanf("%d", &number);
    printf("%d\n", number);

    if (number > 10) {
        printf("Larger than 10.\n");
    }

    return 0;
}