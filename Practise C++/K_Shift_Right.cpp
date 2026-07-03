#include <bits/stdc++.h>
using namespace std;

void shiftRight(vector<int> &A, int N, int X)
{
    X = X % N;
    rotate(A.begin(), A.begin() + (N - X), A.end());
}

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    shiftRight(A, N, X);

    for (int i = 0; i < N; ++i)
    {
        cout << A[i] << (i == N - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
