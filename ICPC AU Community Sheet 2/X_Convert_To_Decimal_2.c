#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        int count = 0;
        while (N > 0) {
            if (N % 2 == 1) {
                count++;
            }
            N /= 2;
        }

        long long result = 0;
        for (int i = 0; i < count; i++) {
            result += pow(2, i);
        }

        printf("%lld\n", result);
    }

    return 0;
}