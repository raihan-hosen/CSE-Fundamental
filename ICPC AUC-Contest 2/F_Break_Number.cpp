#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int max_f = 0;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        int current_f = 0;

        while (x > 0 && x % 2 == 0)
        {
            current_f++;
            x /= 2;
        }

        if (current_f > max_f)
        {
            max_f = current_f;
        }
    }

    cout << max_f << endl;

    return 0;
}