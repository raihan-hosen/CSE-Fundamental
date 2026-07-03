#include <iostream>
#include <string>

using namespace std;

bool is_vowel(char c)
{
    char lower_c = tolower(c);
    return lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u';
}

int count_vowels(const string &s, int i)
{
    if (i >= s.length())
    {
        return 0;
    }
    return is_vowel(s[i]) + count_vowels(s, i + 1);
}

int main()
{
    string s;
    getline(cin, s);

    cout << count_vowels(s, 0) << "\n";

    return 0;
}
