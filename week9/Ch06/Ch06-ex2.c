#include <stdio.h>

int main(void)
{
    char character;
    int i;

    scanf(" %c", &character);

    for (i = 0; i < 20; i++) {
        printf("%c", character);
    }
    printf("\n");

    return 0;
}