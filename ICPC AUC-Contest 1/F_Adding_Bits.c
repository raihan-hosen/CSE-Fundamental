#include <stdio.h>

int main() {
    unsigned int a, b;
    
    scanf("%u %u", &a, &b);

    unsigned int result = a ^ b;

    printf("%u\n", result);

    return 0;
}
