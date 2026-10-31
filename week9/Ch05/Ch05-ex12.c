#include <stdio.h>

int main(void)
{
    int choice;

    while (1) {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? \n");

        if (scanf("%d", &choice) != 1) {
            return 0;
        }

        switch (choice) {
        case 1:
            printf("Seoul\n");
            break;
        case 2:
            printf("Washington, D.C.\n");
            break;
        case 3:
            printf("Tokyo\n");
            break;
        case 4:
            printf("Beijing\n");
            break;
        default:
            printf("none\n");
            return 0;
        }
    }
}
