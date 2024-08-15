#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 2 || n == 1) return 1;

    return func(n - 2) + func(n - 1);
}

int main() {
    int input;
    cin >> input;
    cout << func(input);
    return 0;
}