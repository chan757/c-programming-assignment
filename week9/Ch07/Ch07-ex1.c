#include <stdio.h>

int main(void)
{
    int row;
    int column;

    for (row = 1; row <= 3; row++) {
        for (column = 1; column <= row; column++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}