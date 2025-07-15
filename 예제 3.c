# include <stdio.h>

// 입력 받은 세 정수 중 중간값 출력 with 조건 연산자

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

    printf("%d \n", result);

    return 0;

}

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