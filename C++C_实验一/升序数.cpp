#include <iostream>
#include <cstdio>

using namespace std;

bool panduan(int num) {
    int n[10], c = 0;
    while (num) {
        n[c++] = num % 10;
        num /= 10;
    }
    for (int i = 0; i < c - 1; i++) {
        if (n[i] <= n[i + 1])
            return false;
    }
    return true;
}

int main() {
    for (int i = 1; i <= 10000; i++) {
        if (panduan(i))
            cout << i << " ";
    }
    return 0;
}