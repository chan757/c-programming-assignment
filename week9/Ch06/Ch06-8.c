#include <stdio.h>

int main(void)
{
    int rows;
    int columns;
    int row;
    int column;

    scanf("%d %d", &rows, &columns);

    for (row = 1; row <= rows; row++) {
        for (column = 1; column <= columns; column++) {
            printf("%d", row * column);
            if (column < columns) {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}