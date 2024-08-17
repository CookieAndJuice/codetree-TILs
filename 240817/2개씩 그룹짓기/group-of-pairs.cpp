#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, input;
    cin >> n;
    vector<int> A(2*n);
    vector<int> B(n);
    for (int i = 0; i < A.size(); ++i)
    {
        cin >> input;
        A[i] = input;
    }
    sort(A.begin(), A.end(), greater<int>());

    for (int i = 0; i < n; ++i)
    {
        B[i] = A[2*n - i - 1] + A[i];
    }
    sort(B.begin(), B.end());
    cout << B[n - 1];

    return 0;
}