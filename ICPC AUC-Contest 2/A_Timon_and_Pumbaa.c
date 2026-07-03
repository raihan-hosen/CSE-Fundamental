
#include <stdio.h>
 
int main() {
    long long a, b;
    
    if (scanf("%lld %lld", &a, &b) != 2) {
        return 0;
    }
 
    if (a - b >= 0) {
        printf("%lld\n", a - b);
    } else {
        printf("0\n");
    }
 
    return 0;
}