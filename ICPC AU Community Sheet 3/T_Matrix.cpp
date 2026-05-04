#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long primarySum = 0;
    long long secondarySum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int val;
            cin >> val;

            if (i == j)
            {
                primarySum += val;
            }

            if (j == n - 1 - i)
            {
                secondarySum += val;
            }
        }
    }

    long long diff = primarySum - secondarySum;
    if (diff < 0)
    {
        diff = -diff;
    }

    cout << diff << endl;

    return 0;
}