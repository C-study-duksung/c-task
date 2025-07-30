#include <stdio.h>

// 두 행렬 입력 => 행렬 합 출력

int main(void){

    // 행렬 크기 (행 N / 열 M) 변수 선언
    int N, M;

    while (1)
    {

        // 행렬 크기 입력 받기
        printf("행렬 크기 입력 (행렬 A, B 동일 / 행, 열 순서): ");
        scanf("%d %d", &N, &M);

        if (N < 1 || N > 100 || M < 1 || M > 100){
            printf("행렬 크기를 다시 입력하세요. (행렬 A, B 동일 / 행, 열 순서) \n");
            continue;
        }

        // 행렬 배열 선언
        // 행렬 합 배열 선언
        int A[N][M];
        int B[N][M];
        int sum[N][M];

        // 행렬 원소 입력 받기
        for (int i=0; i<N; i++){
            printf("행렬 A의 %d 번째 행의 원소 %d개를 입력하세요: ", i+1, M);
            for (int j=0; j<M; j++){
                scanf("%d", &A[i][j]);
            }
        }

        for (int i=0; i<N; i++){
            printf("행렬 B의 %d번째 행의 원소 %d개를 입력하세요: ", i+1, M);
            for (int j=0; j<M; j++){
                scanf("%d", &B[i][j]);
            }
        }

        // 행렬 합 구하기
        for (int i=0; i<N; i++){
            for (int j=0; j<M; j++){
                sum[i][j] = A[i][j] + B[i][j];
            }
        }

        // 행렬 합 출력
        printf("행렬 합:\n");
        for (int i=0; i<N; i++){
            for (int j=0; j<M; j++){
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        break;
            
    }

}