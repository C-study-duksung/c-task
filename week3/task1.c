#include <stdio.h>

// 시험 본 과목 수, 기존 점수 입력 => 조작된 점수 평균 출력
// 새로운 평균 구하는 함수 프로그램을 함수로 작성 / main 함수에서 출력

// 새로운 평균 구하는 함수 선언
float NewAverage(int subject, float num1, float num2, float num3);

// main 함수
int main(void)
{
    // 시험 본 과목 수, 기존 점수 변수, 조작된 점수 합, 조작된 점수 평균 선언
    // 세 과목으로 가정 => 이후 과목 수 함수 만들어서 수정해야 함
    int subject;
    float num1, num2, num3; 
    float sum;
    float average;

    // 변수값 초기화
    num1 = 0, num2 = 0, num3 = 0;
    sum = 0, average = 0;

    // 시험 본 과목 수, 기존 점수 변수 입력 받기
    // 점수 조건 추가햐야 함
    subject = 0;
    while (subject <= 0 || subject > 1000)
    {
        printf("과목 수 입력: "); 
        scanf("%d", &subject);
        printf("점수 입력: ");
        scanf("%f %f %f", &num1, &num2, &num3);
    }

    // 함수 호출
    average = NewAverage(subject, num1, num2, num3);
    printf("조작된 점수의 평균: %f \n", average);

    return 0;
}

// 새로운 평균 구하는 함수 정의
// 전달인자(O), 반환값(O)


/*
    1. 중간 점검 (1)
       결과
       코드
       float NewAverage(int subject, float num1, float num2, float num3)
{
    // 변수 선언 및 값 초기화하기
    float sum = 0;
    
    // 입력 받은 점수 중 최대값 구하기
    float max = num1;

    if (num2 > max)
        max = num2;
    else if (num3 > max)
        max = num3;

    // 점수 조작 및 합 구하기
    sum = (num1/max*100) + (num2/max*100) + (num3/max*100);

    return (sum/subject);
}

*/