#include <stdio.h>

int main() {
    int A, B, C;
    char S, Q;
    long long real_result;

    if (scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C) != 5) return 0;

    if (S == '+') {
        real_result = (long long)A + B;
    } else if (S == '-') {
        real_result = (long long)A - B;
    } else if (S == '*') {
        real_result = (long long)A * B;
    }

    if (real_result == C) {
        printf("Yes\n");
    } else {
        printf("%lld\n", real_result);
    }

    return 0;
}
