#include <stdio.h>

// 삽입 정렬 함수
void insertionSort(int arr[], int n) {
    int i, j, key;
    
    // 0번 인덱스는 이미 정렬된 걸로 치고 1번(두 번째) 원소부터 시작
    for (i = 1; i < n; i++) {
        key = arr[i]; // 현재 옮길 값을 key에 저장 (자리 만들어줄 때 안 날아가게)
        j = i - 1;    // 바로 앞의 원소부터 비교 시작
        
        // key보다 큰 값들은 오른쪽으로 한 칸씩 밀어내기
        // while문 조건: 배열 인덱스가 0 아래로 안 내려가게 조심!
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // 오른쪽으로 밀기
            j--;                 // 더 앞쪽 원소랑 비교하기 위해 1 감소
        }
        
        // 빈자리가 된 곳(j+1)에 아까 빼둔 key 값 쏙 넣기
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("정렬 전: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    insertionSort(arr, n);
    
    printf("정렬 후: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}