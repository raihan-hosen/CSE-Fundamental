#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int kaj_korte_hbe = (m1 * d) / (m1 + m2);
        int din_kombe = d - kaj_korte_hbe;

        printf("%d\n", din_kombe);
    }

    return 0;
}