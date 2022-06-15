#include <iostream>
using namespace std;
bool linear_search(int *arr, int const &n, int &x)
{
    if (n == 0)
    {
        return 0;
    }
    if (arr[0] == x)
    {
        return 1;
    }
    return linear_search(arr + 1, n - 1, x);
}

int main()
{
    int n, x;
    cin >> n >> x;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (linear_search(arr, n, x))
        cout << "true";
    else
        cout << "false";
    return 0;
}