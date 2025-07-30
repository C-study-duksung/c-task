#include <stdio.h>

// 색종이 수, 위치 입력 => 도화지 내에서 색종이 붙인 넓이 출력


int main(void){

    while (1)
    {

        // 색종이 수 변수 선언
        // 각 색종이 넓이 합, 색종이 겹친 넓이 합 변수 선언
        int n;
        int total_sum, overlapped_sum;

        // 색종이 수 입력 받기
        printf("색종이 수 입력: ");
        scanf("%d", &n);

        if (n < 1 || n > 100){
            printf("색종이 수를 다시 입력하세요. \n");
            continue;
        }

        // 색종이 위치 배열 (색종이의 왼쪽 아래 x좌표, y좌표) 선언
        int location[n][2];

        // 색종이 위치 입력 받기
        printf("색종이 위치 입력 (색종이 하나 위치 입력 후 enter): ");
        printf("색종이 왼쪽 변~도화지 왼쪽 변 사이 거리 / 색종이 아래쪽 변~도화지 아래쪽 변 사이 거리");
        for (int i=0; i<n; i++){
            for (int j=0; j<2; j++){
                scanf("%d", &location[i][j]);

                if (location[i][j] < 0 || location[i][j] > 90){
                    printf("색종이 위치를 다시 입력하세요. \n");
                    continue;
                }
            }
        }

        // (1~3) 색종이 붙인 넓이 계산

        // (1) 각 색종이 넓이 합 계산
        total_sum = n * 10 * 10

        // (2) 색종이 겹친 넓이 합 계산
        for (int i=0; i<n; i++){
            for (int j=0; j<2; j++){
                overlapped_sum = 
            }
        }

        // (3) 겹친 부분 제외 색종이 넓이 합

        // 색종이 붙인 넓이 출력

        break;

    }

}