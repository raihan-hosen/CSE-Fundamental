#include <iostream>
using namespace std;

int main()
{
    long long int id;
    cin >> id;

    long long row = id / 4;
    long long col = 0;

    if (row % 2 == 0)
    {
        col = id % 4;
    }
    else
        col = 3 - (id % 4);

    cout << row << " " << col << endl;
    return 0;
}