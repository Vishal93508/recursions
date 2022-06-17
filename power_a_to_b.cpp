#include <iostream>
using namespace std;
int power(int &x, int const &n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return x;
    }
    int ans = power(x, n / 2);

    if (n % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return x * ans * ans;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
    return 0;
}