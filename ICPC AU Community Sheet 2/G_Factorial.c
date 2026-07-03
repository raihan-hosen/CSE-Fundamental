#include<stdio.h>
int main() {
    int t,n;
    scanf("%d", &t);

    while(t>0) {
        scanf("%d", &n);

        if(n<1) {
            printf("1\n");
        }

        else if(n>0) {
        long long int fact=1;
        for(int i=1; i<=n; i++) {
            fact*=i;
        }
        printf("%lld\n", fact);
    }
    t--;
    }

return 0;
}