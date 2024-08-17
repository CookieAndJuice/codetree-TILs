#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string input;
    cin >> n;

    vector<string> words(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        words[i] = input;
    }
    sort(words.begin(), words.end());
    for(int i = 0; i < n; i++)
        cout << words[i] << endl;
    return 0;
}