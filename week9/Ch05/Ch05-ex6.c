#include <stdio.h>

int main(void)
{
    int number;

    while (scanf("%d", &number) == 1 && number != 0) {
        if (number > 0) {
            printf("positive number\n");
        } else {
            printf("negative number\n");
        }
    }

    return 0;
}