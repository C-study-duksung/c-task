#include <stdio.h>

int main() {
    int n, v;
    printf("정수의 개수를 입력하세요: ");
    scanf("%d", &n);

    int arr[n];

 
    printf("정수들을 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    printf("찾고자 하는 정수를 입력하세요: ");
    scanf("%d", &v);

 
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            count++;
        }
    }

   
    printf("%d\n", count);

    return 0;
}