// 𝐐4. 세 변수 var1, var2, var3이 주어진다. 이때, 자료형은 각각 정수형, 실수형, 문자형으로 설정한다. 
// var1의 값은 100, var2의 값은 200.0, var3의 값은 A로 설정한다.
#include <stdio.h>

int main(void){
  int val1 = 100;
  // float val2 = 200.0;도 괜찮음
  double val2 = 200.0;
  char val3 = 'A';

  printf("val1은 정수이며 값은%c 입니다.\n",val1);
  printf("val2은 실수이며 값은%d 입니다.\n",(int)val2);
  printf("val3은 문자이며 값은%d입니다.\n",val3);

  return 0;
}
