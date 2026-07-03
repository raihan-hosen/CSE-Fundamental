// You will given a positive integer N and an array A of size N. 
//Also you will be given two values X and V. 
//You need to change the value of X'th index to V and then print the array in reverse way.

// Note: Index starts from 0.

// Input Format

// First line will contain N.
// Second line will contain the array A.
// Third line will contain X and V.
// Constraints

// 1 <= N <= 10^5
// 1 <= A[i] <= 100 ; where A[i] are the values of array A.
// 0 <= X < N
// 1 <= V <= 100
// Output Format

// Output the final array in reverse order.

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int X, V;
    scanf("%d %d", &X, &V);
    arr[X] = V;

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}