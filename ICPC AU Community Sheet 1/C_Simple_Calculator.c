#include<stdio.h>
#include<stdlib.h>
int main() {

    long long int X,Y, Sum, Sub, Mul;
    scanf("%lld %lld", &X, &Y);

    Sum=X+Y;
    Sub=(X-Y);
    Mul=X*Y;

    printf("%lld + %lld = %lld\n", X, Y, Sum);
    printf("%lld * %lld = %lld\n", X, Y, Mul);
    printf("%lld - %lld = %lld\n", X, Y, Sub);
return 0;
}