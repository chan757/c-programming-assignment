#include <stdio.h>

struct Person {
    char name[100];
    int age;
};

int main(void) {
    struct Person me = {"Yejun", 12};
    struct Person my_friend;

    scanf("%s %d", my_friend.name, &my_friend.age);

    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d\n", my_friend.name, my_friend.age);

    return 0;
}