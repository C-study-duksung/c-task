#include <stdio.h>

int main() {
    int x, y;
    
    for(;;){
        printf("x 좌표기입:");
        scanf("%d", &x);
        
        printf("y 좌표기입:");
        scanf("%d", &y);

        if ( x == 0 || y == 0 || x < -1000 || y < -1000 || x > 1000 || y > 1000 ) {
            printf("범위가 틀렸습니다 다시 기입하세요 (-1000 ≤ x,y ≤ 1000 x,y ≠ 0)\n");
            continue;
        }
        if (x > 0 && y > 0) {
            printf("1\n");
        } else if (x < 0 && y > 0){
            printf("2\n");
        } else if (x < 0 && y < 0){
            printf("3\n");
        } else if (x > 0 && y < 0){
            printf("4\n");
        }
        break;

    }
    return 0;
}