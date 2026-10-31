#include <stdio.h>

int main(void)
{
    double base;
    double height;
    char answer;

    do {
        scanf("%lf %lf", &base, &height);
        printf("%.1f\n", base * height / 2.0);
        printf("Continue? ");

        if (scanf(" %c", &answer) != 1) {
            return 0;
        }
    } while (answer == 'Y' || answer == 'y');

    return 0;
}