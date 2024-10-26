#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const char c[16] = { '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f' };

int main() {
    int num;
    int jingzhi;
    int rec[1000];
    int co = 0;

    cin >> num >> jingzhi;
    while (num) {
        rec[co++] = num % jingzhi;
        num /= jingzhi;
    }

    for (int i = co - 1; i >= 0; i--) {
        cout << c[rec[i]];
    }

    return 0;
}