#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 1) return 0;

    if (n % 2 == 0)
    {
        return 1 + func(n / 2);
    }
    else
    {
        return 1 + func(n * 3 + 1);
    }
}

int main() {
    int input;
    cin >> input;
    cout << func(input);
    return 0;
}