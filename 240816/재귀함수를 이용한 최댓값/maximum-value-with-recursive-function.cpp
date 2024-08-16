#include <iostream>
using namespace std;

int func(int n, int arr[])
{
    if (n == 0) return 0;
    int temp = func(n - 1, arr);
    return arr[n - 1] > temp ? arr[n - 1] : temp;
}

int main() {
    int n, input;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> input;
        arr[i] = input;
    }
    cout << func(n, arr);
    return 0;
}