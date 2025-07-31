#include <stdio.h>
#define N 9

int main(void)
{
    int arr[N][N], max = 0, n, m;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                n = i + 1;
                m = j + 1;
            }
        }
    }
    printf("%d\n%d %d\n", max, n, m);
}