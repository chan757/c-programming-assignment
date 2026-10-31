#include <stdio.h>

int main(void)
{
    int number;
    int evenCount = 0;
    int oddCount = 0;
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &number);
        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%d\n", evenCount);
    printf("%d\n", oddCount);

    return 0;
}