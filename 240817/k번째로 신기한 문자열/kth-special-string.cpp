#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, k;
    string T, input;
    cin >> n >> k >> T;

    vector<string> arr;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        if (input.substr(0, T.size()) == T)
            arr.push_back(input);
    }
    sort(arr.begin(), arr.end());

    cout << arr[k - 1];

    return 0;
}