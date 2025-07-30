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
        printf("색종이 위치 입력 (색종이 하나 위치 입력 후 enter)" \n);
        printf("색종이 왼쪽 변~도화지 왼쪽 변 사이 거리 / 색종이 아래쪽 변~도화지 아래쪽 변 사이 거리");
        for (int i=0; i<n; i++){
            for (int j=0; j<2; j++){
                scanf("%d", &location[i][j]);
                }
            }

        // 색종이 붙인 넓이 계산
        total_sum = n * 10 * 10 // 각 색종이 넓이 합 계산

        // (2) 색종이 겹친 넓이 합 계산
        for (int i=0; i<n; i++){
            for (int j=0; j<2; j++){
                overlapped_sum = 
            }
        }

        // (3) 겹친 부분 제외 색종이 넓이 합

        // x좌표 크기 순으로 배열 재배치 필요?
        // x좌표, y좌표의 차이가 모두 1 이상 9 이하 => 겹침
        // ? 좌표끼리 차이 => 절댓값
        if ((-9 <= (x1-x2) && (x1-x2) <= 9) && (-9 <= (y1-y2) && (y1-y2)<= 9)){
            overlapped_sum = (x1-x2) * (y1-y2);
            if (overlapped_sum < 0){
                overlapped_sum = overlapped_sum * (-1); // 넓이 양수로 만들기
            }
            겹침
        }

        // 색종이 붙인 넓이 출력
        printf("색종이 붙인 넓이: %d", total_sum - overlapped_sum);

        break;

    }

}