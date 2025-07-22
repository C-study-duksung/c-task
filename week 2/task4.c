#include <stdio.h>

// 몇 번째 단인지 정수 입력 => 구구단 출력
// 정수(N) 1 이상 9 이하

int main(void){

    // 정수, 곱해주는 값 변수 선언
    int N, i;

    // 정수 변수 입력 받기
    scanf("%d", &N);

    // for 문 이용
    for (i=1; i<=9; i++){
        printf("%d * %d = %d \n", N, i, N*i);
    }

    return 0;

}

/*
    1. for 문에서 result라는 변수를 따로 만들지 않고 N*i를 바로 출력
       result 없앤 이유: 변수 줄이기 위해
       초기 코딩: 
       // 정수, 곱해주는 값, 결과값 변수 선언
       int N, i, result;

       // 정수 변수 입력 받기
       scanf("%d", &N);

       // for 문 이용
       for (i=1; i<=9; i++){
           result = N*i;
           printf("%d * %d = %d \n", N, i, result);
    2. 변수 개수 줄이는 방법
       1) 처음엔 명확하게 변수 다 쓰기
       2) 잘 작동하면, 불필요한 변수 줄이기 [리팩토링]
*/
