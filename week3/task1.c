#include <stdio.h>

float average(int scores[], int n) {
    int max = scores[0];
    float sum = 0.0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    for (int i = 0; i < n; i++) {
        sum += (float)scores[i] / max * 100;
    }

    return sum / n;
}
int main() {
    int n;


    printf("시험 본 과목의 개수를 입력하세요: ");
    scanf("%d", &n);

    int scores[n];

    printf("성적을 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }


    float result = average(scores, n);
    printf("새로운 평균은 %f 입니다.\n", result);

    return 0;
}