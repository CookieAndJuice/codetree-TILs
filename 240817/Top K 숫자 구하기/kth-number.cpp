#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K, input;
    cin >> N >> K;
    vector<int> arr(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << arr[K-1];
    return 0;
}