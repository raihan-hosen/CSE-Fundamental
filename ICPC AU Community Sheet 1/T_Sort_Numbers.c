#include<stdio.h>
int main() {

    long long int a,b,c, big=0, mid=0, small=0;
    scanf("%lld %lld %lld", &a, &b, &c);
    
    if(a>=b && a>=c) {
        big=a;
        if(b>=c) {
            mid=b;
            small=c;
        }
        else{
            mid=c;
            small=b;
        }
    }

     if(b>=a && b>=c) {
        big=b;
        if(a>=c) {
            mid=a;
            small=c;
        }
        else{
            mid=c;
            small=a;
        }
    }

     if(c>=b && c>=a) {
        big=c;
        if(a>=b) {
            mid=a;
            small=b;
        }
        else{
            mid=b;
            small=a;
        }
    }

    printf("%lld\n%lld\n%lld\n\n", small, mid, big);
    printf("%lld\n%lld\n%lld", a,b,c);

return 0;
}