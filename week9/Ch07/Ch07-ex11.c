#include <stdio.h>

int main(void)
{
    int row;
    int column;
    int number = 1;
    char letter = 'a';

    for (row = 0; row < 4; row++) {
        for (column = 0; column < 4; column++) {
            if (column < row) {
                printf("%c ", letter);
                letter++;
            } else {
                printf("%d ", number);
                number++;
            }
        }
        printf("\n");
    }

    return 0;
}