#include <stdio.h>

int main(void)
{
    int number;
    int multipleOf3Count = 0;
    int multipleOf5Count = 0;
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &number);
        if (number % 3 == 0) {
            multipleOf3Count++;
        }
        if (number % 5 == 0) {
            multipleOf5Count++;
        }
    }

    printf("%d\n", multipleOf3Count);
    printf("%d\n", multipleOf5Count);

    return 0;
}