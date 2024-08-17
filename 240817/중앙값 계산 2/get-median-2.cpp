#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, input;
    cin >> n;

    vector<int> arr;

    for (int i = 1; i <= n; ++i)
    {
        cin >> input;
        arr.push_back(input);
        if (i % 2 != 0)
        {
            sort(arr.begin(), arr.end());
            cout << arr[(i - 1) / 2] << " ";
        }
    }

    return 0;
}