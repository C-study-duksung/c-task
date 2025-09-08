/* 
𝐐1. 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
✔️ 입력 : 첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
✔️ 출력 : 시험 성적을 출력한다. 
*/


#include <stdio.h>

int main(void) {
    int score;

    while (1)
    {
        printf("시험 점수를 입력하세요 (0 ~ 100): ");
        scanf("%d", &score);

        if (score <= 0 || score >= 100) {
            printf("0~100 사이의 점수를 입력하세요. \n");
        } else {
            if (score >= 90 && score <= 100) {
                printf("A\n");
                break;                
            } else if (score >= 80 && score < 90) {
                printf("B\n");
                break;                
            } else if (score >= 70 && score < 80) {
                printf("C\n");
                break;                
            } else if (score >= 60 && score < 70) {
                printf("D\n");
                break;                
            } else {
                printf("F\n");
                break;
            }
        }
    }

    return 0;
  
}