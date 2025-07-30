#include <stdio.h>

// 여러 개 정수 입력 => 최솟값, 최댓값 출력 
// 점수 입력 시 공백으로 구분

int main(void){

    // 정수 개수 변수 선언
    // 최솟값 변수, 최댓값 변수 선언
    int n;
    int m, M;

    while (1)
    {
        // 정수 개수 입력 받기
        printf("정수 개수 입력: ");
        scanf("%d", &n);

        if (n < 1 || n > 1000000){
            printf("정수 개수를 다시 입력하세요. \n");
            continue;
        }

        // 정수 배열 선언
        int number[n];

        // 정수 입력 받기
        printf("정수 입력: ");
        for (int i=0; i<n; i++){
            scanf("%d", &number[i]);
            }

        // 최솟값 구하기
        m = number[0];
        for (int i=0; i<n; i++){
            if (number[i] < m){
                m = number[i];
            }
        }

        // 최댓값 구하기
        M = number[0];
        for (int i=0; i<n; i++){
            if (number[i] > M){
                M = number[i];
            }  
        }

        // 최솟값, 최댓값 출력
        printf("최솟값: %d / 최댓값 %d", m, M);
        
        break;

    }

    return 0;

}