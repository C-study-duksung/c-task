#include <stdio.h>

// 하
// 점수 입력 => 학점 출력

int main(void){

    // 점수 변수 선언
    int num;
    
    // 점수 입력 받기
    scanf("%d", &num);

    // 입력 받은 점수에 따른 학점 판별 조건문
    if(90 <= num && num <= 100)
        printf("A");
    else if(80 <= num && num <= 89)
        printf("B");
    else if(70 <= num && num <= 79)
        printf("C");
    else if(60 <= num && num <= 69)
        printf("D");
    else
        printf("F");

    return 0;

}

/*
    < 피드백 >
    1. else i f(80 <= num && num <= 89)
       => else if (80 <= num && num < 90)

*/

/* 
    1. 점수 조건에 따라 학점을 받는 변수 grade는 따로 설정할 필요 없는건지?
       점수 조건에 따라 grade를 다르게 저장되게(?)해서 그 grade를 출력하는 방법도 생각해봤음

*/