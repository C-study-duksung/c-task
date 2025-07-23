#include <stdio.h>

// 입력 받은 두 자연수의 합, 차, 곱, 몫, 나머지 출력 

int main(void){

    // num1, num2 변수 선언
    unsigned int num1, num2;

    // num1, num2 입력 받기
    scanf("%u %u", &num1, &num2);

    // 산술 연산자 이용
    printf("%u\n %u\n %u\n %u\n %u\n",
        num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);

    return 0;

}

// 🔼
// 이렇게 unsigned int로 받아도 괜찮지만, -1 입력 시 → 4294967295로 해석될 가능성도 있어서 틀린 코드는 아니지만
// 그냥 Int형으로 받고 나중에 에러 처리 해주는 게 더 좋긴 합니다.
// 그렇지만 이건 입력부터 음수 입력 시, 에러가 나도록 하는 코드기 때문에 틀리진 않았습니다. 