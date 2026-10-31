#include <stdio.h>

int main(void)
{
    int row;
    int column;

    for (row = 0; row < 5; row++) {
        for (column = 0; column < 5; column++) {
            printf("%d ", row + column + 2);
        }
        printf("\n");
    }

    return 0;
}