#include <iostream>
using namespace std;
bool linear_search(int *arr, int const &n, int &x)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    if (s > e)
    {
        return 0;
    }
    if (arr[mid] == x)
    {
        return 1;
    }
    if (arr[mid] > arr[0])
    {
        e = mid - 1;
    }
    else
    {
        s = mid + 1;
    }
    return linear_search(arr + 1, mid, x);
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