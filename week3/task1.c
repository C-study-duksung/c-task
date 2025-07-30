#include <stdio.h>

// 시험 본 과목 수, 기존 점수 입력 => 조작된 점수 평균 출력
// 새로운 평균 구하는 함수 프로그램을 함수로 작성 / main 함수에서 출력
// 점수 입력 시 공백으로 구분

// 새로운 평균 구하는 함수 선언
float NewAverage(int n, float score[1000]);

// main 함수
int main(void){

    // 시험 본 과목 수 변수, 새로운 평균 변수 선언
    // 기존 점수 배열 선언
    int n;
    float new_average;
    float score[1000];

    while (1)
    {
        // 시험 본 과목 수 입력 받기
        printf("시험 본 과목 수: ");
        scanf("%d", &n);
        
        if (n < 1 || n > 1000){
            printf("시험 본 과목 수를 다시 입력하세요. \n");
            continue;
        }

        // 기존 점수 변수 입력 받기
        printf("점수 입력: ");
        for (int i=0; i<n; i++){
            scanf("%f", &score[i]);
        }

        // 새로운 평균 구하는 함수 호출
        // 조작된 점수 평균 출력
        new_average = NewAverage(n, score);
        printf("조작된 점수의 평균: %f \n", new_average);
        break;

    }
    
    return 0;
}

// 새로운 평균 구하는 함수 정의
float NewAverage(int n, float score[1000])
{
    // 점수 최댓값 변수, 조작된 점수 합 변수 선언
    float max = score[0];
    float sum = 0.0;

    // 기존 점수 최댓값 찾기
    for (int i=0; i<n; i++){
        if (score[i] > max){
            max = score[i];
        }
    }

    // 조작된 점수 조작 및 합 구하기
    for (int i=0; i<n; i++){
        sum += score[i] / max * 100;
    }

    // 새로운 평균 반환하기
    return sum/n;
}


// 전달인자(O), 반환값(O)



/*
   1. 질문 (1)
      조작된 점수를 기존 점수 배열에 넣는 것이 나을지 = 새로운 배열에 넣지 말고

   2. 질문 (2)
      if (n < 0 || n > 1000){
            printf("다시 입력하세요. \n");
            float score[n]
            continue;
        }
       실행 오류 이유: ?

   3. 중간 점검 (1)
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

    4. 중간 점검 (2)
       코드
       if (n < 0 || n > 1000){
            printf("다시 입력하세요. \n");
            float score[n]
            continue;
        }
       실행 오류 이유: ?

*/