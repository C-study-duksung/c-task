#include <stdio.h>

// 2배 증가 함수 선언
void ChangeDouble(*pnum);

// main 함수
int main(void){

    // 변수 선언
    int num;
    int DoubleNum;
    int *pnum;
    pnum = &num;
    
    // 변수 입력받기
    printf("숫자 입력 : ");
    scanf("%d", &num);

    // 2배 증가 함수 호출
    DoubleNum = ChangeDouble(&num);
    printf("%d", DoubleNum);

    return 0;

}

// 2배 증가 함수 정의
int ChangeDouble(*pnum){

    (*pnum) *= 2;

}