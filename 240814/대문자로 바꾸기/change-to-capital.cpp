#include <iostream>
using namespace std;

int main() {
    char graph[5][3];

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> graph[i][j];
            graph[i][j] = graph[i][j] - 32;
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }



    return 0;
}