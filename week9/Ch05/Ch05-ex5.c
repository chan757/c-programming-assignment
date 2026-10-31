#include <stdio.h>

int main(void)
{
    int score;

    while (scanf("%d", &score) == 1 && score >= 0 && score <= 100) {
        if (score >= 80) {
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }

    return 0;
}