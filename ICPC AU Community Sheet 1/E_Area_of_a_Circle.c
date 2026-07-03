#include<stdio.h>
#include<math.h>
int main() {
    const double pi=3.141592653;
    double R, Area;
    scanf("%lf", &R);

    Area= pi*pow(R,2);
    printf("%.9lf", Area);

    return 0;
}