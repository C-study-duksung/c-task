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
        scanf("%d %d %d", &a, &b, &c);

    // if 문 이용
    if (a == b && b == c) // 눈 3개 동일
        money = 10000 + a*1000;
    else if (a == b || b == c || a == c) // 눈 2개 동일
    {
        if (a == b || b == c)
            money = 1000 + b*100;
        else
            money = 1000 + a*100;
    }
    else // 눈 모두 다름
        if (a > b && a > c)
            money = a * 100;
        else if (b > a && b > c)
            money = b * 100;
        else  
            money = c * 100;

    // 상금 출력
    printf("%d", money);

    return 0;

}

/*
    < 피드백 >
    1. 정답 코드 max 사용
       => 보통 많이 사용하는 방법은 아님
       
    2. max 찾기
       => 코드
       int att[5] = {1,2,3,4,5};
       max = arr[0];
       for(int i=0; i<5; i++){
           if (arr[i]>max){
               max=arr[i]}
       }

    2. min 찾기
       => 코드
       int att[5] = {1,2,3,4,5};
       min = arr[0];
       for(int i=0; i<5; i++){
           if (arr[i]<max){
               max=arr[i]}
       }     

    3. 포인터 max 찾기
       => 코드
       int att[5] = {1,2,3,4,5};
       int *p;
       max = arr[0];
       for(int i=0; i<5; p++){
           if (arr[i]>max){
               max = *p;
               max=arr[i}
       }
*/

/*
    1. 좋은 코드를 짜는 사고 방식 전환 방법
       (1) "패턴"이 보이면 변수 사용
           => 조건 쪼개기 (X) 행동 목적 중심으로 사고 (O)
           => 예: 조건 하나하나 따지기 (X) 
                  if (a>b && a>c) (X)
                  여러 값 중 최대값 찾기 (O)
                  int max = a;
                  if (b>max) max=b;
              
       (2) "변화"가 반복될 때, 변수를 중심으로 처리
           => "바뀌는 값"을 변수에 저장
           => 예: 가장 큰 수 = max
                  가장 작은 수 = min
                  합계 = sum

       (3) 코드보다 먼저 "문제의 본질"을 언어로 정리
           => 구현 (X) 사고 흐름 먼저 정리 (O)
           => 예: 세 수 중 가장 큰 수에 100 곱하기
                  = 가장 큰 수 필요
                  = max 변수 사용

       (4) 조건 줄이기 / "목적" 중심으로 사고
           => "무엇을 비교해서 무엇을 하려고 하는지" 목적 중심 사고
           => 예: if (a>b && a>c) (X)
                  큰 수 찾고 거기에 100 곱하기 (O)
                  
       (5) 좋은 코드 많이 보고 "왜 좋은지" 생각
           => "코드의 생각 흐름" 확인
           => 예: 왜 이건 if 대신 변수로 풀었을까?
*/