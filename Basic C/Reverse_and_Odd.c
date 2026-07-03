//You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

// For example:

// If the input is

// 6
// 10 20 30 40 50 60
// You need to print 60 40 20 as their indexes are 5 3 1 respectively.

#include<stdio.h>
int main() {

    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=N-1; i>=0; i--) {
        if (i%2 != 0) {
            printf("%d ", arr[i]);
        }
    }
return 0;
}