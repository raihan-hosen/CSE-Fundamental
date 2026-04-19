#include<stdio.h>
int main() {

    long long int M,N, Sum;
    scanf("%lld %lld", &N, &M);

    Sum=((M%10)+(N%10));
    printf("%lld", Sum);

return 0;
}