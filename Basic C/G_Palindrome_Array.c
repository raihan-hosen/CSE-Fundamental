#include <stdio.h>
#include <stdbool.h>
int main()
{

    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    bool found = false;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] != arr[N-1-i])
            {
                found = true;
                break;
            }
        }


    if (found == false)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}