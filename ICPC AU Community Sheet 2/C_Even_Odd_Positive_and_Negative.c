#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int num, even=0, odd=0, pos=0, neg=0;

    for(int i=1; i<=n; i++) {
        scanf("%d", &num);

        if(num>0) {
            pos++;
        }
        if(num<0) {
            neg++;
        }
        if(num%2==0) {
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);


return 0;
}