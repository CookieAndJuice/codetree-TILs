#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, input;
    string yn = "Yes";
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        A[i] = input;
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        B[i] = input;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < n; ++i)
    {
        if (A[i] != B[i])
            yn = "No";
    }
    cout << yn;

    return 0;
}