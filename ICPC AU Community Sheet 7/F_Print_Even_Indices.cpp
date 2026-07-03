#include <iostream>
#include <vector>

using namespace std;

void print_even_reversed(const vector<long long> &a, int i)
{
    if (i >= a.size())
    {
        return;
    }
    print_even_reversed(a, i + 2);
    cout << a[i] << " ";
}

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    print_even_reversed(a, 0);
    cout << endl;

    return 0;
}
