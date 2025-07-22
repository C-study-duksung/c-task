#include <stdio.h>

// 정수 입력하면 구구단 출력
// 정수(N) 1 이상 9 이하

int main(void){

    // 정수, 곱해주는 값, 결과값 변수 선언
    int N, i, result;

    // 정수 변수 입력 받기
    scanf("%d", &N);

    // for문 이용
    for (i=1; i<=9; i++){
        result = N*i;
        printf("%d * %d = %d \n", N, i, result);
    }

    return 0;

}


