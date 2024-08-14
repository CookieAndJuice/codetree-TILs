#include <iostream>
using namespace std;

int main() {
    int n, m, input, temp;
    
    cin >> n >> m;

    int arr1[n][m] = {};
    int arr2[n][m] = {};
    int out[n][m] = {};

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> input;
            arr1[i][j] = input;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> input;
            arr2[i][j] = input;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arr1[i][j] == arr2[i][j])
                temp = 0;
            else
                temp = 1;
            out[i][j] = temp;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << out[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}