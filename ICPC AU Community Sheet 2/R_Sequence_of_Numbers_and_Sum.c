#include <stdio.h>

int main() {
    int n, m;

    while (scanf("%d %d", &n, &m) == 2) {
        if (n <= 0 || m <= 0) {
            break;
        }

        int start, end;
        if (n < m) {
            start = n;
            end = m;
        } else {
            start = m;
            end = n;
        }

        long long sum = 0;
        for (int i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("sum =%lld\n", sum);
    }

    return 0;
}