#include <iostream>
using namespace std;
int fibonaci(int const &x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }

    int ans = fibonaci(x - 1) + fibonaci(x - 2);
    return ans;
}

int main()
{
    int x;
    cin >> x;
    cout << fibonaci(x) << endl;
    return 0;
}