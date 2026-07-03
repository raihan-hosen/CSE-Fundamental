#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for (int i=0; i<n; i++ ) {
        scanf("%lld", &arr[i]);
    }

    int max=arr[0];
    int min=arr[0];
    int maxdigit=0, mindigit=0;

    for (int i=0; i<n; i++) {
        if(max<arr[i]) {
            max=arr[i];
            maxdigit=i;
        }
        if(min>arr[i]) {
            min=arr[i];
            mindigit=i;
    }
}
    arr[maxdigit]=min;
    arr[mindigit]= max;

    for (int i=0; i<n; i++) {
        printf("%lld ", arr[i]);
    }

return 0;
}