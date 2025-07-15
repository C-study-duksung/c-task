#include <stdio.h>

int main(){

    unsigned int num1, num2;

    scanf("%u %u", &num1, &num2);

    printf("%u\n %u\n %u\n %u\n %u\n",
        num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);

    return 0;

}