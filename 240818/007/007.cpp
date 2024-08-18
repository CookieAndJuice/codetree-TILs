#include <iostream>
#include <string>
using namespace std;

class Secret
{
public:
    string code, place;
    int time;

    Secret(string c, string p, int t)
    {
        this->code = c;
        this->place = p;
        this->time = t;
    }
};

int main() {
    string code, place;
    int time;

    cin >> code >> place >> time;

    Secret a = Secret(code, place, time);

    cout << "secret code : " << a.code << "\n";
    cout << "meeting point : " << a.place << "\n";
    cout << "time : " << a.time;
    return 0;
}