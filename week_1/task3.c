#include <stdio.h>

int main(void)
{
    int a, b, c;
    int second;

    scanf("%d %d %d", &a, &b, &c);

    second = (a >= b) ? ((b >= c) ? b : ((a >= c) ? c : a)) : ((a >= c) ? a : ((b >= c) ? c : b));
    printf("%d\n", second);
}