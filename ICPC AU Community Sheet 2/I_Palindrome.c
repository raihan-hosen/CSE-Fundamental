#include <stdio.h>

int main() {
    int n, original, reverse = 0;
    
    scanf("%d", &n);
    original = n;

    while (n > 0) {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }

    printf("%d\n", reverse);

    if (original == reverse) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}