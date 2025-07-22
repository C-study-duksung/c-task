#include <stdio.h>

int main(void)
{
    int a, b;

    printf("자연수를 입력하세요(A, B 형태): ");
    scanf("%d %d", &a, &b);

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
}