#include <stdio.h>

// 중
// 주사위 3개 눈 입력 => 입력받은 세 수의 값과 규칙에 따른 상금 출력

int main(void) 
{
    // 주사위, 상금 변수 선언
    int a, b, c;
    int money;

    // 자연수 변수 입력 받기
    // 1 <= a, b, c <= 6 아닐 경우, 다시 입력 받기
    a = 0, b = 0, c = 0;
    while (a < 1 || a > 6 || b < 1 || b > 6 || c < 1 || c > 6)
        scanf("%d, %d, %d", &a, &b, &c);

    // if 문 이용
    if (a == b && b == c) // 눈 3개 동일
        money = 10000 + a*1000
    else if (a == b || b == c || a == c) // 눈 2개 동일
        // 같은 눈 판별
        money = 1000 + (같은 눈)*100

    // 눈 1개 동일


}