/*
𝐐5. 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제.
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

✔️ 입력 : 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
✔️ 출력 : 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/


#include <stdio.h>

int main(void){
  int line;

  printf("줄 수를 입력하세요: ");
  scanf("%d", &line);

  for (int i = 1; i < line+1; i++)
  {
    for (int j = 0; j < line-i; j++){
      printf(" ");
    }
    for (int j = 0; j < i; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}