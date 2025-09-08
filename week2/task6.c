/*
𝐐6. M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오. 

✔️ 입력 : 첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.
✔️ 출력 : 한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.
*/

#include <stdio.h>

int main(void) {
    int M, N;
    
    while(1) {
      printf("M과 N을 빈 칸을 사이에 두고 입력하시오: ");
      scanf("%d %d", &M, &N);

      if (M > N) {
        printf("M은 N보다 클 수 없습니다.\n");
      } else {
        for (int i = M; i <= N; i++) {
          if (i <  2) continue; // 0과 1은 소수가 아님

          int isPrime = 1;

          for (int j = 2; j * j<= i; j++) {
            if(i % j == 0) {
              isPrime = 0; // 나누어 떨어지면 소수 아님
              break;
            }
          }
          if(isPrime) {
            printf("%d\n", i);
          }
        }
        break;
      }
    } 
    return 0;
}