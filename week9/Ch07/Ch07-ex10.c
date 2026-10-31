#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int column;
    char letter = 'A';

    scanf("%d", &n);

    for (row = n; row >= 1; row--) {
        for (column = 0; column < row; column++) {
            printf("%c", letter);
            letter++;
        }
        printf("\n");
    }

    return 0;
}