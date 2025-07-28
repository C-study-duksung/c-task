#include <stdio.h>

int main(void) 
{
    int a = 1;

    printf("시작\n");

    for (; a <= 5; a++)
    {
        printf("%d", a);
    }

    if (a == 3)
        printf("%d == 4", a);

    printf("\n");
    printf("끝");

    return 0;
}