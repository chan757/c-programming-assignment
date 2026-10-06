#include <stdio.h>

// 배열을 오름차순으로 정렬하는 버블 정렬 함수
void bubbleSortAscending(int arr[], int n) {
    // 전체 회전수를 관리하는 바깥쪽 for문 (마지막 하나는 자동으로 정렬되니 n-1번만 돎)
    for (int i = 0; i < n - 1; i++) {
        // 인접한 두 항목을 비교하고 교환하는 안쪽 for문
        // 한 회전이 끝날 때마다 가장 큰 수가 맨 뒤로 가니까 n-i-1까지만 비교하면 됨
        for (int j = 0; j < n - i - 1; j++) {
            // 앞의 숫자가 뒤의 숫자보다 크면 자리를 바꿈 (오름차순)
            if (arr[j] > arr[j + 1]) {
                // temp 변수를 이용한 전형적인 값 스왑(Swap) 기법
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // 정렬해 볼 초기 배열 셋팅
    int arr[] = { 7, 4, 5, 1, 3 };
    // 배열의 전체 요소 개수 구하는 공식 (배열 전체 바이트 크기 / 요소 1개의 바이트 크기)
    int n = sizeof(arr) / sizeof(arr[0]);

    // 정렬하기 전 초기 상태 출력
    printf("초기 상태 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("] \n");

    // 위에서 만든 버블 정렬 함수 실행
    bubbleSortAscending(arr, n);

    // 정렬이 완료된 배열 결과 출력
    printf("정렬된 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("] \n");

    return 0;
}