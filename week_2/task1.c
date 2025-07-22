#include <stdio.h>

int main(void)
{
    int score;

    printf("Input your score: ");
    scanf("%d", &score);

    if ((score >= 90) && (score <= 100))
        printf("A\n");
    else if (score >= 80)
        printf("B\n");
    else if (score >= 70)
        printf("C\n");
    else if (score >= 60)
        printf("D\n");
    else if (score >= 0)
        printf("F\n");
    else
        printf("It's wrong score.\n");
}