#include <stdio.h>

int main() {
	int score;

        for(;;) {
            printf("점수 기입하시오 : ");
            scanf("%d", &score);

            if (score <0 || score >100) {
                printf("다시 기입하시오\n");
            }
            else {
            if ( score >= 90) {
                printf("A\n");
            } else if (score >= 80) {
                printf("B\n");
            } else if (score >= 70) {
                printf("C\n"); 
            } else if (score >= 60) {
                printf("D\n");
            } else {
                printf("F\n");
            }
        
            break;
        }
    }
    return 0;
}