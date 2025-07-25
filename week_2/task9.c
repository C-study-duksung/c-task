#include <stdio.h>

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

int main(void)
{
    long long A, B, gcd, res;
    scanf("%lld %lld", &A, &B);

    res = lcm(A, B);
    printf("%lld\n", res);
}