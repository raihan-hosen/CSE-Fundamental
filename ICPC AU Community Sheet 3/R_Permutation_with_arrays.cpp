#include <iostream>
#include <algorithm> // For sort()

using namespace std;

int main()
{
    int n;
    if (!(cin >> n))
        return 0;

    long long arrA[n];
    long long arrB[n];

    // Input first array
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    // Input second array
    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }

    sort(arrA, arrA + n);
    sort(arrB, arrB + n);

    bool isPermutation = true;
    for (int i = 0; i < n; i++)
    {
        if (arrA[i] != arrB[i])
        {
            isPermutation = false;
            break;
        }
    }

    if (isPermutation)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}