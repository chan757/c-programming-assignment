#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int column;
    int number = 1;

    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (column = 1; column <= row; column++) {
            printf("%d", number);
            if (column < row) {
                printf(" ");
            }
            number++;
        }
        printf("\n");
    }

    return 0;
}