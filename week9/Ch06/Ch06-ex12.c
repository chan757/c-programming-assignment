#include <stdio.h>

int main(void)
{
    int subjectCount;
    int score;
    int total = 0;
    int i;
    double average;

    scanf("%d", &subjectCount);

    for (i = 0; i < subjectCount; i++) {
        scanf("%d", &score);
        total += score;
    }

    average = (double)total / subjectCount;
    printf("%.1f\n", average);

    if (average >= 80.0) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }

    return 0;
}