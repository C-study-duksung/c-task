#include <stdio.h>

// 수학 2차 평면의 좌표 입력하면 몇 사분면인지 출력
// x좌표, y좌표 모두 -1000 이상 1000 이하이며 0 아님

int main(void){

    // x좌표, y좌표 변수 선언
    int xnum, ynum;

    // x좌표, y좌표 입력 받기
    scanf("%d", &xnum);
    scanf("%d", &ynum);

    // 입력 받은 x좌표, y좌표에 따른 사분면 판별 조건문
    if(0 < xnum && xnum <= 1000 && 0 < ynum && ynum <= 1000)
        printf("1 \n");
    else ifs(-1000 <= xnum && xnum < 0 && 0 < ynum && ynum <= 1000)
        printf("2 \n");
    else if(-1000 <= xnum && xnum < 0 && -1000 <= ynum && ynum < 0)
        printf("3 \n");
    else
        printf("4 \n");

    return 0;

}

/*
    1. 제 4 사분면 판별할 때 else만 써도 괜찮은 거 같은데 맞는지
       이유: 애초에 전제 조건으로 " x좌표, y좌표 모두 -1000 이상 1000 이하이며 0 아님 " 이 있어서
*/