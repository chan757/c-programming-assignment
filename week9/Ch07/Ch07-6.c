#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int column;
    int number = 1;

    scanf("%d", &n);

    for (row = 0; row < n; row++) {
        for (column = 0; column < row; column++) {
            printf(" ");
        }
        for (column = 0; column < n - row; column++) {
            printf("%d", number);
            if (column < n - row - 1) {
                printf(" ");
            }
            number++;
        }
        printf("\n");
    }

    return 0;
}