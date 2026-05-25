#include <iostream>
using namespace std;

long long int sutro(int a, int b, char s)
{
    if (s == '+')
    {
        return a + b;
    }
    if (s == '-')
    {
        return a - b;
    }
    if (s == '*')
    {
        return a * b;
    }
}

void check(long long int value, long long int c)
{
    if (value == c)
    {
        cout << "Yes";
    }
    else
    {
        cout << value;
    }
}

int main()
{

    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    long long int value = sutro(a, b, s);
    check(value, c);

    return 0;
}