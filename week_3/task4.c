#include <stdio.h>

int make_matrix(int n, int m, int arr[n][m]);
int sum_matrix(int n, int m, int arr[n][m], int arr2[n][m], int sum[n][m]);
int print_matrix(int n, int m, int arr[n][m]);

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M], B[N][M], sum[N][M];
    make_matrix(N, M, A);
    make_matrix(N, M, B);

    sum_matrix(N, M, A, B, sum);
    printf("\n");
    print_matrix(N, M, sum);
}

int make_matrix(int n, int m, int arr[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    return 0;
}

int sum_matrix(int n, int m, int arr[n][m], int arr2[n][m], int sum[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    return 0;
}

int print_matrix(int n, int m, int arr[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}