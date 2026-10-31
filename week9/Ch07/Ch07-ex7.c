#include <stdio.h>

int main(void)
{
    int row;
    int space;
    int star;

    for (row = 1; row <= 5; row++) {
        for (space = 1; space <= 5 - row; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}