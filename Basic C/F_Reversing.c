#include<stdio.h>
#include<stdlib.h>
int main() {

    long long int N;
    scanf("%lld", &N);

    long long int arr[N];
    for (int i=0; i<N; i++) {
        scanf("%lld", &arr[i]);
    }

    for (int i=N-1; i>=0; i--) {
        printf("%lld ", arr[i]);
    }

return 0;
}