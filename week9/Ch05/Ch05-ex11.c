#include <stdio.h>

int main(void)
{
    int choice;

    do {
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number:\n");

        if (scanf("%d", &choice) != 1) {
            return 0;
        }

        switch (choice) {
        case 1:
            printf("You selected Input.\n");
            break;
        case 2:
            printf("You selected Output.\n");
            break;
        case 3:
            printf("You selected Delete.\n");
            break;
        case 4:
            printf("You selected Finish.\n");
            break;
        default:
            printf("Wrong input.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}