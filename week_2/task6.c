#include <stdio.h>

int is_prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);

    for (int i = M; i <= N; i++)
        if (is_prime(i))
            printf("%d\n", i);
}