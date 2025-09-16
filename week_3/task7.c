#include <stdio.h>
#include <string.h>
#define N 5
#define M 15

int main(void)
{
    char arr[N][M] = {
        0,
    };

    for (int i = 0; i < N; i++)
    {
        fgets(arr[i], M, stdin);

        int len = strlen(arr[i]);
        if (len > 0 && arr[i][len - 1] == '\n')
            arr[i][len - 1] = '\0';
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[j][i] == '\0' || arr[j][i] == ' ')
                continue;
            printf("%c", arr[j][i]);
        }
    }

    printf("\n");
}