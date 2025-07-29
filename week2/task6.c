int main(void) {
    int M, N;

    while (1) {
        scanf("%d %d", &M, &N);
        if (1 <= M && M <= N && N <= 1000000) {
            break;
        }
    }

    for (int num = M; num <= N; num++) {
        int thtn = 1; 
        if (num < 2) continue;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                thtn = 0;  
                break;
            }
        }

        if (thtn) {
            printf("%d\n", num);
        }
    }

    return 0;
}