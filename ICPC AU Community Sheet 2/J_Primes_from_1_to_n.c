#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    bool first = true;
    for (int i = 2; i <= n; i++) {
        bool is_prime = true;
        
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            if (!first) printf(" ");
            printf("%d", i);
            first = false;
        }
    }
    printf("\n");

    return 0;
}