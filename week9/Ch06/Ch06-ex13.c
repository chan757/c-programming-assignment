#include <stdio.h>

int main(void)
{
    int row;
    int column;

    for (row = 1; row <= 5; row++) {
        for (column = 0; column < 5; column++) {
            printf("%d ", row);
        }
        printf("\n");
    }

    printf("\n");

    for (row = 0; row < 5; row++) {
        for (column = 1; column <= 5; column++) {
            printf("%d ", column);
        }
        printf("\n");
    }

    return 0;
}