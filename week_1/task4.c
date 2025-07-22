#include <stdio.h>

int main(void)
{
    int var1 = 100;
    float var2 = 200.0;
    char var3 = 'A';

    printf("val1은 정수이며 값은 %c입니다.\n", (char)var1);
    printf("val2은 정수이며 값은 %d입니다.\n", (int)var2);
    printf("val3은 정수이며 값은 %d입니다.\n", (int)var3);
}