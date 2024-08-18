#include <iostream>
#include <string>
using namespace std;

class Data
{
    public:
    string date, day, weather;

    Data() {}
    Data(string date, string day, string weather)
    {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
};

int main() {
    int n, index;
    string minDate;
    cin >> n;

    Data datas[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> datas[i].date;
        cin >> datas[i].day;
        cin >> datas[i].weather;
    }

    minDate = "2100";
    index = 100;
    for (int i = 0; i < n; ++i)
    {
        if (datas[i].weather == "Rain")
        {
            if (stoi(minDate.substr(0, 4)) > stoi(datas[i].date.substr(0, 4)))
            {
                minDate = datas[i].date;
                index = i;
            }
            else if (stoi(minDate.substr(0, 4)) == stoi(datas[i].date.substr(0, 4)))
            {
                if (stoi(minDate.substr(5, 2)) > stoi(datas[i].date.substr(5, 2)))
                {
                    minDate = datas[i].date;
                    index = i;
                }
                else if (stoi(minDate.substr(5, 2)) == stoi(datas[i].date.substr(5, 2)))
                {
                    if (stoi(minDate.substr(7, 2)) > stoi(datas[i].date.substr(7, 2)))
                    {
                        minDate = datas[i].date;
                        index = i;
                    }
                }
            }
        }
    }

    cout << datas[index].date << " " << datas[index].day << " " << datas[index].weather;

    return 0;
}