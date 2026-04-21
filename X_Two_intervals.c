#include <stdio.h>

int main() {
    long long l1, r1, l2, r2;

    // Take input
    scanf("%lld %lld %lld %lld", &l1, &r1, &l2, &r2);

    // Find starting point of intersection (bigger left value)
    long long start;
    if (l1 > l2) {
        start = l1;
    } else {
        start = l2;
    }

    // Find ending point of intersection (smaller right value)
    long long end;
    if (r1 < r2) {
        end = r1;
    } else {
        end = r2;
    }

    // Check if intersection exists
    if (start <= end) {
        printf("%lld %lld\n", start, end);
    } else {
        printf("-1\n");
    }

    return 0;
}