#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    string input;
    cin >> input;
    sort(input.begin(), input.end());
    cout << input;

    return 0;
}