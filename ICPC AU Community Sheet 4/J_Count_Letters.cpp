#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count[26] = {0};
    char c;

    while (cin >> c)
    {
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            char letter = i + 'a';
            cout << letter << " : " << count[i] << "\n";
        }
    }

    return 0;
}
