#pragma warning(disable: 4996)
#include <stdio.h>
#define VAT_RATE 0.04       // 상수 선언, 부가세율 0.04

int main()
{
    double foodPrice;           //음식 가격 초기화
    double totalPrice = 0.0;    //총가격 초기화

    printf("음식의 가격을 입력하세요(원): ");
    scanf("%lf", &foodPrice);

    totalPrice = foodPrice + (foodPrice * VAT_RATE); //총가격 계산

    printf("부가세 포함 총가격: %.2lf원\n", totalPrice);

    return 0;
}