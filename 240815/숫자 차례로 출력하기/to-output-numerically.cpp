#include <iostream>
using namespace std;

void func1(int num)
{
    if (num == 0)   return;

    func1(num - 1);
    cout << num << " ";
    return;
}

void func2(int num)
{
    if (num == 0)   return;

    cout << num << " ";
    func2(num - 1);
    return;
}

int main() {
    int n;

    cin >> n;

    func1(n);
    cout << "\n";
    func2(n);
    
    return 0;
}