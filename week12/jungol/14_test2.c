#include <stdio.h>
#include <string.h>

struct Info {
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void) {
    struct Info p[3];
    int first_idx = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%s %s %s", p[i].name, p[i].tel, p[i].addr);
    }

    for (int i = 1; i < 3; i++) {
        if (strcmp(p[i].name, p[first_idx].name) < 0) {
            first_idx = i;
        }
    }

    printf("name : %s\n", p[first_idx].name);
    printf("tel : %s\n", p[first_idx].tel);
    printf("addr : %s\n", p[first_idx].addr);

    return 0;
}