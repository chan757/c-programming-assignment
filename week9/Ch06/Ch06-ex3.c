#include <stdio.h>

int main(void)
{
    char letter;

    for (letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c ", letter);
    }
    printf("\n");

    return 0;
}