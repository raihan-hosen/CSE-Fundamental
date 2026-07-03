#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    // Reading N as a string because it can be 100 digits long
    if (!(cin >> n))
        return 0;

    // The pair (0, 0) satisfies (0^2 + 0^2) % N = 0 for any N > 0
    cout << "0 0" << endl;

    return 0;
}