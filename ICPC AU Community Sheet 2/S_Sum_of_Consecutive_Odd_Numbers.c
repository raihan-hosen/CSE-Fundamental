#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int x, y;
        scanf("%d %d", &x, &y);

        int start, end;
        if (x < y) {
            start = x;
            end = y;
        } else {
            start = y;
            end = x;
        }

        long long sum = 0;
        for (int i = start + 1; i < end; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        printf("%lld\n", sum);
    }

    return 0;
}