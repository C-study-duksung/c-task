#include <stdio.h>

int main(void) {
    int N;
    printf("창문의 개수를 입력하세요: ");
    scanf("%d", &N);

    int count = 0;


    for (int i = 1; i * i <= N; i++) {
        count++;
    }

    printf("열려 있는 창문의 개수는 %d개입니다.\n", count);
    return 0;
}