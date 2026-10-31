#include <stdio.h>

int main(void)
{
    int number;

    scanf("%d", &number);

    if (number > 0) {
        if (number % 2 == 0) {
            printf("Even Number\n");
        } else {
            printf("Odd Number\n");
        }
    } else {
        printf("Non positive\n");
    }

    return 0;
}