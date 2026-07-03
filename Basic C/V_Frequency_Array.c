#include <stdio.h>
int main()
{
    int n, m;
    scanf ("%d %d", &n, &m);

    int a[100005];
    int count[100005];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= 0 && a[i] <= 100000)
        {
            count[a[i]]++;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}
