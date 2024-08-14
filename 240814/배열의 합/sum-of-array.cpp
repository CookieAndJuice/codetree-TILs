#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int input, sum;

    for (int i = 0; i < 4; ++i)
    {
        sum = 0;
        for (int j = 0; j < 4; ++j)
        {
            cin >> input;
            sum += input;
        }
        cout << sum << "\n";
    }

    return 0;
}