/*
𝐐4. N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다. 
✔️ 입력 : 첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.
✔️ 출력 : 출력형식과 같게 N*1부터 N*9까지 출력한다.
*/


#include <stdio.h>

int main(void){
  int N;
  while (1)
  {
    printf("출력할 N단을 입력하세요: ");
    scanf("%d", &N);
    if (N < 1 || N > 9) {
      printf("다시 입력하세요.\n");
    } else {
      for(int i=1; i<10; i++){
        printf("%d * %d = %d\n", N, i, N*i);
      }
      break;
    }
  }
  return 0;
  
}