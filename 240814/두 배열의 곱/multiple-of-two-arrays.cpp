#include <iostream>
using namespace std;

int main() {
    int arr1[3][3] = {};
    int arr2[3][3] = {};
    int input, temp;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> input;
            arr1[i][j] = input;
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> input;
            arr2[i][j] = input;
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            temp = arr1[i][j] * arr2[i][j];
            cout << temp << " ";
        }
        cout << "\n";
    }

    return 0;
}