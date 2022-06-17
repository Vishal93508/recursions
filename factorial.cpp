#include <iostream>
using namespace std;
int power(int &x, int const &n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
    return 0;
}