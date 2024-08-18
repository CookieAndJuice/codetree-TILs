#include <iostream>
#include <string>
using namespace std;

class ID
{
    public:
    string id;
    int level;

    ID(string i = "", int l = 0)
    {
        this->id = i;
        this->level = l;
    }
};

int main() {
    string userID;
    int lv;

    ID user1 = ID("codetree", 10);
    ID user2 = ID();
    
    cin >> userID >> lv;

    user2.id = userID;
    user2.level = lv;

    cout << "user " << user1.id << " lv " << user1.level << "\n";
    cout << "user " << user2.id << " lv " << user2.level;
    
    return 0;
}