#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long first = 0, second = 1;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", first);
        } else if (i == 2) {
            printf("%lld", second);
        } else {
            long long next = first + second;
            printf("%lld", next);
            first = second;
            second = next;
        }

        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}