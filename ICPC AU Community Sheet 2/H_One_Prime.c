#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("NO\n");
        return 0;
    }

    bool is_prime = true;
    for (int i = 2; i<= n/2; i++) { 
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) printf("YES\n");
    else printf("NO\n");

    return 0;
}