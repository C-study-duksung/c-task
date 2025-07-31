#include <stdio.h>

int main(void)
{
    int N, min = 1000000, max = 1;

    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d %d\n", min, max);
}