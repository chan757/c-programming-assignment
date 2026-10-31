#include <stdio.h>

int main(void)
{
    double grade;

    scanf("%lf", &grade);

    if (grade >= 4.0) {
        printf("scholarship\n");
    } else if (grade >= 3.0) {
        printf("next semester\n");
    } else if (grade >= 2.0) {
        printf("seasonal semester\n");
    } else {
        printf("retake\n");
    }

    return 0;
}