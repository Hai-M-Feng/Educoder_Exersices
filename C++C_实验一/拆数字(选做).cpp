#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == '.')
            continue;
        cout << s[i] << "  ";
    }
    return 0;
}