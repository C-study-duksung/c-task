#include <stdio.h>

int main() {
    int paper[100][100] = {0};  
    int n;

    printf("색종이의 수를 입력하세요: ");
    scanf("%d", &n);

    printf("색종이의 좌표를 입력하세요 (왼쪽 아래 x y):\n");

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        
        for (int row = y; row < y + 10; row++) {
            for (int col = x; col < x + 10; col++) {
                paper[row][col] = 1;
            }
        }
    }

   
    int area = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] == 1) {
                area++;
            }
        }
    }

    printf("검은 영역의 넓이: %d\n", area);
    return 0;
}