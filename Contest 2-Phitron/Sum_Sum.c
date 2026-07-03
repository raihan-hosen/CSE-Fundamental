// You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

// Input Format

// First line will contain N.
// Second line will contain N values named V.
// Constraints

// 1 <= N <= 10^5
// -1000 <= V <= 1000
// Output Format

// Output the sum of positive numbers first, then sum of negative numbers.

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

    int positive_sum = 0, negative_sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            positive_sum += arr[i];
        }
        else if (arr[i] < 0)
        {
            negative_sum += arr[i];
        }
    }

    printf("%d %d", positive_sum, negative_sum);
    return 0;
}