#include <stdio.h>

void numSwitch(int *p, int *q)
{
    int temp = *q;
    *q = *p;
    *p = temp;
}

int main(void)
{
    int num1, num2;
    int *p = &num1;
    int *q = &num2;

    printf("숫자1 : ");
    scanf("%d", p);
    printf("숫자2 : ");
    scanf("%d", q);

    printf("바꾸기 전 숫자1 : %d, 숫자2 : %d\n", *p, *q);

    numSwitch(p, q);

    printf("바꾼 후 숫자1 : %d, 숫자2 : %d\n", *p, *q);
}