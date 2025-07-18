# include <stdio.h>

// 입력 받은 세 정수 중 중간값 출력 with 조건 연산자 / without 입력

int main() {

    // num1, num2, num3, result 변수 선언
    int num1, num2, num3;
    int result;

    // num1, num2, num3 입력 받기
    scanf("%d %d %d", &num1, &num2, &num3);

    // 조건 연산자 이용
    result =
        (num2 <= num1 && num1 <= num3) || (num3 <= num1 && num1 <= num2) ? num1 :
        (num1 <= num2 && num2 <= num3) || (num3 <= num2 && num2 <= num1) ? num2 :
        num3;

    // num1, num2, num3 중 중간값 출력
    printf("%d \n", result);

    return 0;

}

// ❌
// 조건 연산자만 이용하라는 의미 였는데 &&와 ||도 사용하셨네요 😅
// 한 줄로 간략하게 끝날 수 있는 코드가 많이 복잡해진 거 같아요..
// 이런 문제의 경우, 일반적으로 if-else문을 사용하겠지만, 
// 조건 연산자를 이해하고 잘 활용해봤으면 하는 마음에 낸 문제라 틀렸다고 봐야할 거 같아요.

/* 
    1. 조건 연산자
       [조건] ? [참] : [거짓]
    2. num1 <= num2 <= num3 안 됨 
       이유: num1 <= num2 판별 결과와 num3의 크기 비교 
       예: (10 <= 5 <= 7) 
       예상 결과: 거짓 0
       실제 결과: ((10 <= 5) <= 7) 
                 == (10 <= 5 결과 거짓을 뜻하는 '0') && (0 <= 7 결과 참을 뜻하는 '1') 
                 == 참 1
    3. && 역할: 피연산자가 모두 참이면 true 반환 [and 의미]
    4. || 역할: 피연산자 중 하나라도 참이면 true 반환 [or 의미]
*/