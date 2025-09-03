#include <stdio.h>
#define N 100

int main(void)
{
    int n, x, y, count = 0;
    int arr[N][N] = {
        0,
    };

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                arr[x + j][y + k] = 1;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == 1)
                count += 1;
        }
    }

    printf("%d\n", count);
}