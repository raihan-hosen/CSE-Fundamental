#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        long long arr[n + 1];
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &arr[i]);
        }

        long long min_sum = LLONG_MAX;
        long long min_val = arr[1] - 1;

        for (int j = 2; j <= n; j++) {
            long long current_total = (arr[j] + j) + min_val;
            
            if (current_total < min_sum) {
                min_sum = current_total;
            }

            if ((arr[j] - j) < min_val) {
                min_val = arr[j] - j;
            }
        }

        printf("%lld\n", min_sum);
    }
    return 0;
}
