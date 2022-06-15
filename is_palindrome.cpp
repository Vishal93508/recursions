#include <iostream>
using namespace std;

bool palindrome(string &s, int i, int j)
{
    if (i >= j)
    {
        return 1;
    }
    if (s[i] != s[j])

        return 0;

    return palindrome(s, i + 1, j - 1);
}

int main()
{
    string s;
    cin >> s;
    if (palindrome(s, 0, s.length() - 1))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}