#include <stdio.h>

int main(void)
{
    int N;

    printf("Input N: ");
    scanf("%d", &N);

    for (int i = 0; i < 9; i++)
        printf("%d * %d = %d\n", N, i + 1, N * i + N);
}