#include <stdio.h>

int main(void)
{
    int N, M = 0;
    float avg, sum = 0.0;
    scanf("%d", &N);

    int original[N];
    float new[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &original[i]);
        if (original[i] > M)
            M = original[i];
    }

    for (int i = 0; i < N; i++)
    {
        new[i] = (float)original[i] / (float)M * 100;
        sum += new[i];
    }

    avg = sum / (float)N;
    printf("%f\n", avg);
}