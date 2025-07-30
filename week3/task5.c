#include <stdio.h>

// 9X9 격자판에 정수 입력 => 최댓값, 최댓값 위치 출력
// 정수 0 또는 100 이하 자연수

int main(void)
{

    // 격자판 배열 선언
    int number[9][9];

    // 정수 입력 받기
    for (int i=0; i<9; i++){
        printf("%d번째 줄 정수 9개 입력 (0 또는 100 이하 자연수): ", i+1);
        for (int j=0; j<9; j++){
            scanf("%d", &number[i][j]);
        }
    }

    // 최댓값 변수 선언
    // 최댓값 배열의 행렬 선언 = [a][b]
    int max = 0;
    int a, b;

    // 최댓값 구하기
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            if (number[i][j] > max){
                max = number[i][j];
                a = i;
                b = j;
            }
        }
    }

    // 최댓값, 최댓값 위치 출력
    printf("최댓값: %d \n최댓값 위치: %d행 %d열", max, a+1, b+1);

}