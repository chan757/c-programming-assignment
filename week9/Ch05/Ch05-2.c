#include <stdio.h>

int main(void)
{
    int number;
    int oddCount = 0;
    int evenCount = 0;

    while (scanf("%d", &number) == 1 && number != 0) {
        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%d\n", oddCount);
    printf("%d\n", evenCount);

    return 0;
}