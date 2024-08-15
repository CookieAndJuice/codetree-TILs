#include <iostream>
using namespace std;

void func(int n)
{
    if (n == 0) return;
    cout << n << " ";
    func(n - 1);
    cout << n << " ";
    return;
}

int main() {
    int input;
    cin >> input;
    func(input);
    return 0;
}