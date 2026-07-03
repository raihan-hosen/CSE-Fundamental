#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
    }

    long long int low = arr[0];
    long long int digit = 1;

    for (int i = 1; i < N; i++) {
        if (arr[i] < low) {
            low = arr[i];
            digit = i + 1;
        }
    }

    printf("%lld %lld\n", low, digit);

    return 0;
}