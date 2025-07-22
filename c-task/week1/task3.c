#include <stdio.h>

int main() {
    int A, B, C, max, mid, min;
    scanf("%d %d %d", &A, &B, &C);

    if ((A >= B && A <= C) || (A <= B && A >= C)) {
        mid = A;
    } else if ((B >= A && B <= C) || (B <= A && B >= C)) {
        mid = B;
    } else {
        mid = C;
    }

    printf("%d\n", mid);
    return 0;
}