#include <stdio.h>

// 선택 정렬 함수
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    
    // 마지막 원소는 자동으로 정렬되니까 n-1까지만 반복
    for (i = 0; i < n - 1; i++) {
        min_idx = i; // 일단 현재 위치를 최솟값 인덱스로 가정함
        
        // i 다음 위치부터 끝까지 돌면서 진짜 최솟값 찾기
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // 더 작은 값을 찾으면 인덱스 업데이트!
            }
        }
        
        // 찾은 최솟값을 현재 위치(i)의 값과 자리 바꾸기 (Swap)
        // 주의: temp 안 쓰면 기존 값이 덮어씌워져서 날아감
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    // 배열 전체 크기를 요소 하나 크기로 나눠서 길이 구하기 (교수님이 알려주신 공식)
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    printf("정렬 전: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    selectionSort(arr, n);
    
    printf("정렬 후: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}