#include<stdio.h>
int main() {
    int x,p;
    scanf("%d %d", &x, &p);

    float new_price = (p/(1.00-(x/100.00)));
    printf("%.2f", new_price);

return 0;
}