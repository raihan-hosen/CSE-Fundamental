#include <stdio.h>
#include <stdbool.h>

bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    bool found = false;
    bool first = true;

    for (int i = a; i <= b; i++) {
        if (isLucky(i)) {
            if (!first) printf(" ");
            printf("%d", i);
            found = true;
            first = false;
        }
    }

    if (!found) {
        printf("-1");
    }
    printf("\n");

    return 0;
}