#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 1) return 1;
    else if (n == 0) return 0;

    return n + func(n - 2);
}

int main() {
    int input;

    cin >> input;
    cout << func(input);
    return 0;
}