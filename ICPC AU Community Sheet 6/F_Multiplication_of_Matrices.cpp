#include <iostream>

using namespace std;

const int MAX_SIZE = 105;
long long A[MAX_SIZE][MAX_SIZE];
long long B[MAX_SIZE][MAX_SIZE];
long long C[MAX_SIZE][MAX_SIZE];

void inputMatrix(int rows, int cols, long long matrix[MAX_SIZE][MAX_SIZE])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int main()
{
    int rA, cA;
    cin >> rA >> cA;
    inputMatrix(rA, cA, A);

    int rB, cB;
    cin >> rB >> cB;
    inputMatrix(rB, cB, B);

    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < cA; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cout << C[i][j] << (j == cB - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}