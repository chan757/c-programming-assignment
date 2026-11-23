#include <stdio.h>

struct Person {
    char name[100];
    int height;
    double weight;
};

int main(void) {
    struct Person p[5], temp;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %lf", p[i].name, &p[i].height, &p[i].weight);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (p[i].height > p[j].height) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1lf\n", p[i].name, p[i].height, p[i].weight);
    }

    return 0;
}