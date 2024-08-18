#include <iostream>
using namespace std;

class Codename
{
    public:
    string name;
    int score;

    Codename() {}
    Codename(string n, int s)
    {
        this->name = n;
        this->score = s;
    }
};

int main() {
    string sInput;
    int iInput, imin = 100, index = 0;

    Codename arr[5];

    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i].name;
        cin >> arr[i].score;
        if (imin > arr[i].score)
        {
            index = i;
            imin = arr[i].score;
        }
    }

    cout << arr[index].name << " " << arr[index].score;

    return 0;
}