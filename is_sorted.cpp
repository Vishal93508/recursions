#include <iostream>
using namespace std;

bool sorted(int *arr, int const &n)
{
    if (n == 0)
    {
        return 1;
    }
    if (arr[0] > arr[1])
    {
        return 0;
    }
    return sorted(arr + 1, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (sorted(arr, n))
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
    return 0;
}