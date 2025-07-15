#include <stdio.h>

// 주어진 세 변수의 자료형과 값 출력 without 입력
// 주어진 세 변수: var1 = 정수형 100, var2 = 실수형 200, var3 = 문자형 A

// 자료형 이름 지정
#define TYPE_INT "정수"
#define TYPE_FLOAT "실수"
#define TYPE_CHAR "문자"

int main(){

    // var1, var2, var3 변수 선언
    int var1;
    float var2;
    char var3;

    // 각 변수에 값 넣기
    var1 = 100;
    var2 = 200;
    var3 = 'A';

    // 변수의 자료형과 값 출력
    // 실수형: 소수점 이하 출력 X
    printf("var1은 %s이며, 값은 %d입니다.\n", TYPE_INT, var1);
    printf("var2은 %s이며, 값은 %.0f입니다.\n", TYPE_FLOAT, var2);
    printf("var3은 %s이며, 값은 %c입니다.\n", TYPE_CHAR, var3);

    return 0;

}

/* 
    1. 변수명, 자료형을 직접 확인 및 출력 불가
       대안: 사람이 직접 정의
       예: #define TYPE_INT "정수"
           #define TYPE_FLOAT "실수"
           #define TYPE_CHAR "문자"
    2. 전처리 지시문: 함수 밖에 작성 원칙
    3. %.(숫자) 역할: 소수점 이하 (숫자) 자리 출력
       예: 200.1234 && %.2f
       결과: 200.12  
*/