#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 1) return 0;

    if (n % 2 == 0)
    {
        return func(n / 2) + 1;
    }
    else
    {
        return func(n / 3) + 1;
    }
}

int main() {
    int input, sum;
    cin >> input;
    sum = func(input);
    cout << sum;
    return 0;
}