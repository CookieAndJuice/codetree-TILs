#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
    string name, zipcode, location;

    Person() {}
    Person(string n, string z, string l)
    {
        this->name = n;
        this->zipcode = z;
        this->location = l;
    }
};

int main() {
    int n, min;
    string name, zipcode, location;

    cin >> n;

    Person persons;

    name = "aaaaaaaaaa";

    for (int i = 0; i < n; ++i)
    {
        cin >> persons.name >> persons.zipcode >> persons.location;
        if (persons.name > name)
        {
            name = persons.name;
            zipcode = persons.zipcode;
            location = persons.location;
        }        
    }

    cout << "name " << name << endl;
    cout << "addr " << zipcode << endl;
    cout << "city " << location;
    
    return 0;
}