#include <stdio.h>

int main(void)
{
    int number;

    scanf("%d", &number);
    printf("%d\n", number);

    if (number < 0) {
        printf("minus\n");
    }

    return 0;
}