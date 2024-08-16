#include <iostream>
using namespace std;

int func(int n)
{
    if (n < 10) return n;
    return n % 10 + func(n / 10);
}

int main() {
    int input, sum = 1;
    
    for (int i = 0; i < 3; ++i)
    {
        cin >> input;
        sum *= input;
    }
    cout << func(sum);

    return 0;
}