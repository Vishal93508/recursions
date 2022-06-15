#include <iostream>
using namespace std;
void power(int const &x)
{
    if (x == 0)
    {
        return;
    }
    cout << x << endl;
    power(x - 1);
}

int main()
{
    int x;
    cin >> x;
    power(x);
    return 0;
}