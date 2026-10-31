#include <stdio.h>

int main(void)
{
    int first;
    int second;

    scanf("%d %d", &first, &second);

    if (first >= 4 && second >= 4) {
        printf("WIN.\n");
    } else if (first >= 4 || second >= 4) {
        printf("DRAW.\n");
    } else {
        printf("LOSE.\n");
    }

    return 0;
}