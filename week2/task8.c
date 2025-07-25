/*
𝐐8. 서강대학교 컴퓨터공학과 실습실 R912호에는 현재 N개의 창문이 있고 또 N명의 사람이 있다. 1번째 사람은 1의 배수 번째 창문을 열려 있으면 닫고 닫혀 있으면 연다.  2번째 사람은 2의 배수 번째 창문을 열려 있으면 닫고 닫혀 있으면 연다. 이러한 행동을 N번째 사람까지 진행한 후 열려 있는 창문의 개수를 구하라. 단, 처음에 모든 창문은 닫혀 있다.

예를 들어 현재 3개의 창문이 있고 3명의 사람이 있을 때,

1. 1번째 사람은 1의 배수인 1,2,3번 창문을 연다. (1, 1, 1)
2. 2번째 사람은 2의 배수인 2번 창문을 닫는다. (1, 0, 1)
3. 3번째 사람은 3의 배수인 3번 창문을 닫는다. (1, 0, 0)

결과적으로 마지막에 열려 있는 창문의 개수는 1개 이다.

✔️ 입력 : 첫 번째 줄에는 창문의 개수와 사람의 수 N(**1 ≤ N ≤ 2,100,000,000**)이 주어진다.
✔️ 출력 : 마지막에 열려 있는 창문의 개수를 출력한다.
*/


/* ✅ 문풀 핵심
	1.	창문은 짝수번 건드려지면 닫혀 있고, 홀수번 건드려지면 열려 있음
	2.	어떤 창문이 몇 번 건드려졌는지는 그 창문 번호의 약수 개수랑 같음, 약수가 홀수 개인 수는 제곱수밖에 없음.
	3.  열려 있는 창문 = 1부터 N까지의 제곱수 개수
*/

#include <stdio.h>

int main(void) {
    int N;
    printf("창문 및 사람의 수를 입력하세요: ");
    scanf("%d", &N);

    int count = 0, i = 1;

    while (i * i <= N) {
        count++;
        i++;
    }

    printf("%d\n", count);
    return 0;
}