#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int sum = 1;
    for (int i = 0; i < 100; i++) {
        sum *= 12;
        sum %= 1000;
    }
    cout << sum;
    return 0;
}