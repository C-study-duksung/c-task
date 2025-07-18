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

// ❌
// 변수 선언과 동시에 초기화를 시켜주는 게 더 나았을 거 같아요. ex) int var1 = 100; 이렇게요.
// 그리고 굳이.. 문자열을 고정해서 넣으실 거라면 위에 define해서 상수처럼 사용한 이유를 모르겠네요.
// 저 값이 밑에서도 반복적으로 많이 사용되나요? 개념을 최대한으로 쓰는게 꼭 좋은 코드는 아닌 거 같아요.
// 상수처리는 그 값이 코드 내에서 반복적으로 많이 처리될 때 주로 선언해놓습니다.
// 또한 이 문제는 '형 변환'이 키워드인 문제였는데 실행시켜보니 var2가 실수라면서 정수값이 찍히네요. 
// 문제 이해를 잘못하신 거 같습니다.

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