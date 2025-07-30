#include <stdio.h>

// 여러 개 정수, 찾으려는 정수 입력 => 찾으려는 정수가 몇 개인지 출력
// 정수 입력 시 공백으로 구분

int main(void){
    // 정수 개수, 찾으려는 정수 변수 선언
    // 찾으려는 정수 개수 변수 선언
    int n, v;
    int count_v = 0;
    
    while (1)
    {
        // 정수 개수 입력
        printf("정수 개수 입력: ");
        scanf("%d", &n);

        if (n < 1 || n > 100){
            printf("정수 개수를 다시 입력하세요. \n");
            continue;
        }

        // 정수 배열 선언
        int number[n];

        // 정수 입력
        printf("정수 입력: ");
        for (int i=0; i<n; i++){
            scanf("%d", &number[i]);
        }

        // 찾으려는 정수 입력
        printf("찾으려는 정수 입력: ");
        scanf("%d", &v);

        if (v < -100 || v > 100){
            printf("찾으려는 정수를 다시 입력하세요. \n");
            continue;
        }

        // 찾으려는 정수 개수 구하기
        for (int i=0; i<n; i++){
            if (v == number[i]){
                count_v += 1;
            }
        }

        // 찾으려는 정수 개수 출력
        printf("찾으려는 정수 개수: %d", count_v);

        break;

    }

}