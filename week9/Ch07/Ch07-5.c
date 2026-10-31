#include <stdio.h>

int main(void)
{
    int n;
    int row;
    int column;
    char letter = 'A';

    scanf("%d", &n);

    for (row = 0; row < n; row++) {
        for (column = 0; column < n; column++) {
            if (letter <= 'Z') {
                printf("%c", letter);
            } else {
                printf("%d", letter - 'Z' - 1);
            }

            if (column < n - 1) {
                printf(" ");
            }
            letter++;
        }
        printf("\n");
    }

    return 0;
}