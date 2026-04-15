#include<stdio.h>
#include<stdlib.h>
int main() {

    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }

    long long int sum=0;
    for(int i=0; i<N; i++) {
        sum+=arr[i];
    }

   printf("%lld", llabs(sum));

return 0;
}