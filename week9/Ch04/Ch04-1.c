#include <stdio.h>

int main(){
   int num1;
   int num2;
   int sum;
   
   scanf("%d", &num1); scanf("%d", &num2);
    if(num1>num2){
        sum = num1 - num2;
    }
    else{
        sum = num2 - num1;
    }
printf("%d", sum);

    return 0;
}