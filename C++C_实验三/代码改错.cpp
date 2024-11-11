#include <iostream>
using namespace std;

class Date {
public:
    Date(int year, int month, int day) {
        (*this).year = year;
        (*this).month = month;
        (*this).day = day;
    };
    ~Date() {};
    int& GetYear() { return year; }
    int& GetMonth() { return month; }
    int& GetDay() { return day; }
private:
    int year;
    int month;
    int day;
    static bool IsLeapyear;
};

bool Date::IsLeapyear = true;

int main()
{
    int year, month, day;
    cin >> year >> month >> day;
    Date mydate(year, month, day);
    int& myyear = mydate.GetYear();
    int& mymonth = mydate.GetMonth();
    int& myday = mydate.GetDay();
    cout << myyear << "-" << mymonth << "-" << myday << '\n';
    cout << mydate.GetYear() << "-" << mydate.GetMonth() << "-" << mydate.GetDay() << '\n';
    myyear = 2003;
    mymonth = 9;
    myday = 1;
    cout << mydate.GetYear() << "-" << mydate.GetMonth() << "-" << mydate.GetDay() << '\n';
    return 0;
}
