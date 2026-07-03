#include <bits/stdc++.h>
using namespace std;

// 1. Function to get the maximum number
int get_max(const vector<int> &arr)
{
    int max_val = arr[0];
    for (int num : arr)
    {
        if (num > max_val)
        {
            max_val = num;
        }
    }
    return max_val;
}

// 2. Function to get the minimum number
int get_min(const vector<int> &arr)
{
    int min_val = arr[0];
    for (int num : arr)
    {
        if (num < min_val)
        {
            min_val = num;
        }
    }
    return min_val;
}

// 3. Function to check if a number is prime
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int count_primes(const vector<int> &arr)
{
    int count = 0;
    for (int num : arr)
    {
        if (is_prime(num))
        {
            count++;
        }
    }
    return count;
}

// 4. Function to check if a number is a palindrome
bool is_palindrome(int n)
{
    string s = to_string(n);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int count_palindromes(const vector<int> &arr)
{
    int count = 0;
    for (int num : arr)
    {
        if (is_palindrome(num))
        {
            count++;
        }
    }
    return count;
}

// 5. Function to get the number of divisors
int count_divisors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

int max_divisors_num(const vector<int> &arr)
{
    int target_num = arr[0];
    int max_divs = count_divisors(arr[0]);

    for (int num : arr)
    {
        int current_divs = count_divisors(num);
        if (current_divs > max_divs)
        {
            max_divs = current_divs;
            target_num = num;
        }
        else if (current_divs == max_divs)
        {
            if (num > target_num)
            {
                target_num = num;
            }
        }
    }
    return target_num;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "The maximum number : " << get_max(arr) << "\n";
    cout << "The minimum number : " << get_min(arr) << "\n";
    cout << "The number of prime numbers : " << count_primes(arr) << "\n";
    cout << "The number of palindrome numbers : " << count_palindromes(arr) << "\n";
    cout << "The number that has the maximum number of divisors : " << max_divisors_num(arr) << "\n";

    return 0;
}