#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long m;
        long long a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long product_abc = a * b * c;

        if (m % product_abc == 0)
        {
            printf("%lld\n", m / product_abc);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}