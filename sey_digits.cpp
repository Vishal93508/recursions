#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// hash table approch 1;
int main()
{
    int x;
    cin >> x;
    unordered_map<string, int> m;
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;
    m["four"] = 4;
    m["five"] = 5;
    m["six"] = 6;
    m["seven"] = 7;
    m["eight"] = 8;
    m["nine"] = 9;
    m["zero"] = 0;
    // m["one"] = 1;
    int reverse = 0;
    while (x > 0)
    {
        int rim = x % 10;
        reverse = (reverse * 10) + rim;
        x = x / 10;
    }
    while (reverse > 0)
    {
        int ans = reverse % 10;
        for (auto i : m)
        {

            if (i.second == ans)
            {
                cout << i.first << " ";
            }
        }
        reverse = reverse / 10;
    }
    return 0;
}

// APPROACH 2 RECURSION;
void say_digit(string *arr, int const &n)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    // n = n / 10;
    say_digit(arr, n / 10);
    cout << arr[digit] << " ";
}

int main()
{
    int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three",
                      "four", "five", "six", "seven", "eight", "nine"};
    say_digit(arr, n);
    return 0;
}
