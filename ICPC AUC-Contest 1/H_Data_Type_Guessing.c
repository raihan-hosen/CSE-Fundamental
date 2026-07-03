#include <stdio.h>

int main() {
    long long n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);

    if ((n * k) % a != 0) {
        printf("double\n");
    } else {
        long long res = (n * k) / a;
        if (res <= 2147483647) {
            printf("int\n");
        } else {
            printf("long long\n");
        }
    }

    return 0;
}
