// 𝐐2. 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main(void){
  int A, B;
  scanf("%d %d", &A, &B);

  printf("%d\n",A+B);
  printf("%d\n",A-B);
  printf("%d\n",A*B);
  // C는 자동 형 변환이 안되므로 정수 나누기 정수의 결과값은 정수로 반환됨
  printf("%d\n",A/B);
  printf("%d\n",A%B);

  return 0;
}