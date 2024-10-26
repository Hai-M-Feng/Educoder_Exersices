#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n[1010];
int rec[100];
int numcount = 0;

int cifang(int dishu, int cimi) {
    int sum = 1;
    for (int i = 0; i < cimi; i++) {
        sum *= dishu;
    }
    return sum;
}

int tonum() {
    int sum = 0;
    for (int i = numcount; i > 0; i--) {
        sum += rec[numcount - i] * cifang(10, i - 1);
    }
    return sum;
}

int main()
{
    int co = 0;
    int up = -1;
    string s;

    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (i == s.length() - 1) {
            rec[numcount++] = s[i] - '0';
            n[co++] = tonum();
            break;
        }
        if (s[i] != ',') {
            rec[numcount++] = s[i] - '0';
            continue;
        }
        else {
            n[co++] = tonum();
            numcount = 0;
            continue;
        }
    }
    
    for (int i = 0; i < co - 1; i++) {
        if (n[i] == n[i + 1]) {
            for (int j = i + 1; j < co - 1; j++) {
                n[j] = n[j + 1];
            }
            co--;
            i--;
        }
    }

    for (int i = 0; i < co; i++) {
        if (up == -1) {
            if (n[i] < n[i + 1]) {
                up = 1;
                cout << "(";
            }
            if (n[i] > n[i + 1]) {
                up = 0;
                cout << "(";
            }
        }
        if (up == 1) {
            cout << n[i];
            if (i == co - 1) {
                cout << ")";
                return 0;
            }
            if (n[i] < n[i + 1]) {
                cout << ",";
            }
            if (n[i] > n[i + 1]) {
                cout << "),(";
                up = 0;
                i--;
            }
        }
        else if (up == 0) {
            cout << n[i];
            if (i == co - 1) {
                cout << ")";
                return 0;
            }
            if (n[i] > n[i + 1]) {
                cout << ",";
            }
            if (n[i] < n[i + 1]) {
                cout << "),(";
                up = 1;
                i--;
            }
        }
    }
    return 0;
}