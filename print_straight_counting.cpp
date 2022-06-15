#include <iostream>
using namespace std;
void power(int const &x)
{
    if (x == 0)
    {
        return;
    }
    power(x - 1);
    cout << x << endl;
}

int main()
{
    int x;
    cin >> x;
    power(x);
    return 0;
}