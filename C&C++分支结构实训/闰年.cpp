#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int year, month;
    bool run = false;

    cin >> year >> month;

    if (year <= 1582) {
        if (year % 4 == 0) {
            run = true;
        }
        else {
            run = false;
        }
    }
    else {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            run = true;
        }
        else {
            run = false;
        }
    }

    switch (month) {
    case 1:
        cout << 31;
        break;

    case 2:
        if (run) {
            cout << 29;
        }
        else {
            cout << 28;
        }
        break;

    case 3:
        cout << 31;
        break;

    case 4:
        cout << 30;
        break;

    case 5:
        cout << 31;
        break;

    case 6:
        cout << 30;
        break;

    case 7:
        cout << 31;
        break;

    case 8:
        cout << 31;
        break;

    case 9:
        cout << 30;
        break;

    case 10:
        cout << 31;
        break;

    case 11:
        cout << 30;
        break;

    case 12:
        cout << 31;
        break;
    }

    return 0;
}