#include <stdio.h>

// 입력 받은 두 자연수의 합, 차, 곱, 몫, 나머지 출력

int main(){

    // num1, num2 변수 선언
    unsigned int num1, num2;

    // num1, num2 입력 받기
    scanf("%u %u", &num1, &num2);

    // 산술 연산자 이용
    printf("%u\n %u\n %u\n %u\n %u\n",
        num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);

    return 0;

}