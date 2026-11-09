#include <stdio.h>

int main() {
    int arr[100], count = 0;
    int m5_count = 0, sum = 0;
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break;
        }
        if (arr[i] % 5 == 0) {
            m5_count++;
            sum += arr[i];
        }
    }
    printf("Multiples of 5 : %d\n", m5_count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / m5_count);
    return 0;
}
