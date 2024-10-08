#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main() {
    int n, input;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        arr[i] = input;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}