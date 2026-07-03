#include <bits/stdc++.h>
using namespace std;

float calculateSum(const vector<float> &a)
{
    float sum = 0;
    for (float number : a)
    {
        sum += number;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    vector<float> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    float average = calculateSum(v) / n;

    cout << fixed << setprecision(7) << average << endl;

    return 0;
}