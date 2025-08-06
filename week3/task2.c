#include <stdio.h>

int main() {
    int n;

  
    printf("정수의 개수를 입력하세요: ");
    scanf("%d", &n);

    int intnum[n]; 

    printf("정수를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &intnum[i]);
    }


    int min = intnum[0];
    int max = intnum[0];


    for (int i = 1; i < n; i++) {
        if (intnum[i] < min) {
            min = intnum[i];
        }
        if (intnum[i] > max) {
            max = intnum[i];
        }
    }


    printf("%d %d\n", min, max);

    return 0;
}