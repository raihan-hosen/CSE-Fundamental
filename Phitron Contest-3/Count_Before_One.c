#include <stdio.h>

int count_before_one(long long int a[], long long int n)
{
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int result = count_before_one(a, n);
    printf("%d\n", result);

    return 0;
}