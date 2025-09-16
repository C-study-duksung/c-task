#include <stdio.h>

void ChangeDoublie(int *p)
{
    *p = (*p) * 2;
}

int main(void)
{
    int num;
    int *p = &num;

    printf("숫자 입력 : ");
    scanf("%d", p);
    ChangeDoublie(p);
    printf("%d\n", *p);
}