#include <stdio.h>

int main(void)
{
    int number;
    int evenCount = 0;
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &number);
        if (number % 2 == 0) {
            evenCount++;
        }
    }

    printf("%d\n", evenCount);

    return 0;
}