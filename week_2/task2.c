#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Input x: ");
    scanf("%d", &x);
    printf("Input y: ");
    scanf("%d", &y);

    if (x >= 0)
    {
        if (y >= 0)
            printf("1사분면\n");
        else
            printf("4사분면\n");
    }
    else
    {
        if (y >= 0)
            printf("2사분면\n");
        else
            printf("3사분면\n");
    }
}