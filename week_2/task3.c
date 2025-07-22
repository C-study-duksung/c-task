#include <stdio.h>

int main(void)
{
    // 원래 설정되어 있는 알람을 45분 앞서는 시간으로 바꾸기
    // 0 <= h <= 23, 0 <= m <= 59
    int h, m;

    printf("Input Hour & Minute: ");
    scanf("%d %d", &h, &m);

    if ((h >= 0) && (h <= 23))
    {
        if (m >= 45)
            printf("%d시 %d분\n", h, m - 45);
        else
        {
            if (h == 0)
                printf("%d시 %d분\n", 23, 60 - 45 + m);
            else
                printf("%d시 %d분\n", h - 1, 60 - 45 + m);
        }
    }
}