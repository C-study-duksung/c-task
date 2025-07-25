/*
𝐐5. <그림 1>과 같이 9×9 격자판에 쓰여진 81개의 자연수 또는 0이 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 행 몇 열에 위치한 수인지 구하는 프로그램을 작성하시오.
예를 들어, 다음과 같이 81개의 수가 주어지면 이들 중 최댓값은 90이고, 이 값은 5행 7열에 위치한다.
✔️ 입력 : 첫째 줄부터 아홉 번째 줄까지 한 줄에 아홉 개씩 수가 주어진다. 주어지는 수는 100보다 작은 자연수 또는 0이다.
✔️ 출력 : 첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 위치한 행 번호와 열 번호를 빈칸을 사이에 두고 차례로 출력한다. 최댓값이 두 개 이상인 경우 그 중 한 곳의 위치를 출력한다.
*/
#include <stdio.h>

int main(void){
  int arr[9][9];
  int max, pointI, pointJ;

  printf("배열을 채우세요: \n");
  for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
      if(arr[i][j] > max){
        max = arr[i][j];
        pointI = i;
        pointJ = j;
      }
    }
  }

  printf("%d\n", max);
  printf("%d %d\n", pointI+1, pointJ+1);

  return 0;
}