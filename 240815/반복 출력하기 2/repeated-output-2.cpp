#include <iostream>
using namespace std;

void hello(int num)
{
    if (num == 0) return;
    hello(num - 1);
    cout << "HelloWorld" << "\n";
    return;
}

int main() {
    int N;

    cin >> N;

    hello(N);

    return 0;
}