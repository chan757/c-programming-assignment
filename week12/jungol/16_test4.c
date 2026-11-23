#include <stdio.h>
#include <math.h>

struct Body {
    int height;
    double weight;
};

struct Body makeStudent(struct Body father, struct Body mother) {
    struct Body s;
    s.height = (father.height + mother.height) / 2 + 5;
    s.weight = round(((father.weight + mother.weight) / 2.0 - 4.5) * 10) / 10.0;
    return s;
}

int main()
{
    struct Body father, mother;
    scanf("%d %lf", &father.height, &father.weight);
    scanf("%d %lf", &mother.height, &mother.weight);

    struct Body student = makeStudent(father, mother);

    printf("height : %dcm\n", student.height);
    printf("weight : %.1fkg\n", student.weight);

    return 0;
}