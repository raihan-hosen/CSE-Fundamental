#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    while (q--)
    {
        int x;
        cin >> x;

        if (binary_search(arr.begin(), arr.end(), x))
        {
            cout << "found\n";
        }
        else
        {
            cout << "not found\n";
        }
    }

    return 0;
}