#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    bool i3 = false, i5 = false, i7 = false;

    int num, co = 0;
    cin >> num;

    i3 = num % 3 == 0 ? true : false;
    i5 = num % 5 == 0 ? true : false;
    i7 = num % 7 == 0 ? true : false;

    if (i3)
        co++;
    if (i5)
        co++;
    if (i7)
        co++;

    if (co == 3) {
        cout << 'a';

        return 0;
    }
    if (co == 2) {
        cout << "b" << endl;

        if (i3)
            cout << 3 << " ";
        if (i5)
            cout << 5 << " ";
        if (i7)
            cout << 7 << " ";
        return 0;
    }
    if (co == 1) {
        cout << "c" << endl;

        if (i3)
            cout << 3 << " ";
        if (i5)
            cout << 5 << " ";
        if (i7)
            cout << 7 << " ";
        return 0;
    }
    if (co == 0) {
        cout << "d";

        return 0;
    }

    return 0;
}