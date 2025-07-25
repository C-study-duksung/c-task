#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    // 창문이 건드려진 횟수 = 약수의 개수
    // 약수의 개수가 홀수 개인 수 = 제곱수
    int count = (int)sqrt(N);
    printf("%d\n", count);
}