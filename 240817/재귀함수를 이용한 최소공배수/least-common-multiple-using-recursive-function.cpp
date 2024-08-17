#include <iostream>
using namespace std;

int euclid(int a, int b)
{
    if (a > b)
    {
        if (b == 0) return a;

        return euclid(b, a % b);
    }
    else if (a < b)
    {
        if (a == 0) return b;

        return euclid(a, b % a);
    }
    else
    {
        return a;
    }
}

int func(int arr[], int n)
{
    if (n == 0) return 1;
    int a = func(arr, n - 1);
    int min = euclid(arr[n-1], a);

    return a * arr[n-1] / min;
}

int main() {
    int n, input;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        arr[i] = input;
    }
    cout << func(arr, n);
    return 0;
}