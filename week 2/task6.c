#include <stdio.h>

// task5
// 몇 줄까지 만들건지 정수 입력 => 별 출력
// 정수(N) 1 이상 100 이하

int main(void){

    // 줄 선언
    int N; 

    // 줄 변수 입력 받기
    scanf("%d", &N); // N = 5

    // for 문 이용
    for(; N>0; N--) // N = 5 4 3 2 1
    { 
        for(int i=0; i<N-1; i++) // a 개수만큼 공백 출력 
            printf(" ");
        for(int j=5; j>N-1; j--) // N 개수만큼 * 출력
            printf("*");
        printf("\n");
    }

    return 0;

}

/*
    1. N번째 줄까지 별 찍기 = 세로 N줄 = 가로 N줄
    2. for 문에 사용할 별 출력 과정
       N-1만큼 띄어쓰기 && 1개 별 출력
       N-2만큼 띄어쓰기 && 2개 별 출력
       ...
       [N-(N-1)] 만큼 띄어쓰기 && N개 별 출력
    3. for 문 초기 코딩
       int N, space;
       for(space=N-1; space>=0; space--) // space = N-1, N-2, ... , 0 && space 점점 감소하는 것으로 space>=0
       { 
           for(int a=0; a<space; a++) // a 개수만큼 공백 출력 && a 점점 커지는 것으로 a<=space
               printf(" ");
           for(int b=0; b<N-space; b++) // b 개수만큼 * 출력 && b 점점 커지는 것으로 b<=space
               printf("*");
           printf("\n");
       }
    4. for(int a=N-1; ; ) // a 개수만큼 공백 출력 
           printf(" ");
        무한 루프에 빠지는 건 알겠는데, int a=N-1은 유지하면서 for문 N-1번 반복하게 하는 방법
        => for(int a=N-1; a>0; a--)
                printf(" ");
        => 가독성 안 좋음..?

    5. 실행 결과: 왼쪽 위부터 출력되며 점점 별 개수 적어짐
                 ____*****
                 ___****
                 __***
                 _**
                 *
       코드:
       for(; N>0; N--) // N = 5 4 3 2 1
       { 
           for(int i=0; i<N-1; i++) // a 개수만큼 공백 출력 
               printf(" ");
           for(int j=0; j<N; j++) // N 개수만큼 * 출력
               printf("*");
           printf("\n");
       }
    6. 변수 개수 줄이는 방법
       1) 처음엔 명확하게 변수 다 쓰기
       2) 잘 작동하면, 불필요한 변수 줄이기 [리팩토링]

*/